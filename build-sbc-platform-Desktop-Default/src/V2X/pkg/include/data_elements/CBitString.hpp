#ifndef BIT_STRING_HPP_
#define BIT_STRING_HPP_

#include "asn_src/BIT_STRING.h"

#include <bitset>
#include <stdexcept>

namespace v2x {
namespace element {

template <size_t COUNT>
class CBitString {
  public:

    const int bytesInString = ((COUNT - 1)/8) + 1;

    CBitString()
    {
    }

    CBitString(const BIT_STRING_t *bitString)
    {
        set(bitString);
    }

    CBitString(long value)
    {
        set(value);
    }

    CBitString(const CBitString &other) {
        operator=(other);
    }

    ~CBitString()
    {
    }

    CBitString& operator =(const CBitString& other) {
        if (this != &other)
            bits = other.bits;
        return *this;
    }

    explicit operator BIT_STRING_t *() {
        /* Achtung! Must be destroyed after usage */
        BIT_STRING_t *asn_bitString = new BIT_STRING_s;

        asn_bitString->buf = new uint8_t[bytesInString];
        bzero(asn_bitString->buf, bytesInString);

        bitsetToASN(asn_bitString);
        return asn_bitString;
    }

    explicit operator std::string() const {
        return std::string(bits.to_string());
    }


    bool operator==(const CBitString& other) const {
        return (bits == other.bits);
    }

    bool operator!=(const CBitString& other) const {
        return (bits != other.bits);
    }

    void set(const unsigned long& value)
    {
        if (value >= COUNT || value < 0)
            throw std::out_of_range("CBitString: set value: out of range");

        this->bits.set(value);
    }

    void set(const BIT_STRING_t *bitString)
    {

        if (BIT_STRING_constraint(&asn_DEF_BIT_STRING, bitString,
                                  nullptr, nullptr))
            throw std::out_of_range("CBitString: set: incorrect input");

        for (size_t i = 0; i < bitString->size * CHAR_BIT; i++) {
            if (bitString->buf[i /  CHAR_BIT] & (1 << (i % CHAR_BIT)))
                bits.set(i, true);
        }
    }

    bool test(size_t pos) const
    {
        return bits.test(pos);
    }
    void clean()
    {
        bits.reset();
    }

    void convertToASN(BIT_STRING_t *asn_bitString)
    {
        bitsetToASN(asn_bitString);
    }

  private:
    void bitsetToASN(BIT_STRING_t *asn_bitString)
    {
        if (!asn_bitString) {
            asn_bitString = new BIT_STRING_t;
        }
        if (!asn_bitString->buf) {
            asn_bitString->buf = new uint8_t[bytesInString];
        }
        bzero(asn_bitString->buf, bytesInString);

        for (size_t i = 0; i < COUNT; i++)
            asn_bitString->buf[ i  /  CHAR_BIT ] |= (bits[i] << (i % CHAR_BIT));

        asn_bitString->size = bytesInString;
        ///TODO: need find true solution for bitString
        asn_bitString->bits_unused = (8 - (COUNT & 0x7)) & 0x7;

        if (BIT_STRING_constraint(&asn_DEF_BIT_STRING, asn_bitString,
                                  nullptr, nullptr))
            throw std::out_of_range("CBitString: set value: incorrect input");
        ///TODO: need find true solution for bitString

        if(asn_bitString->bits_unused) {
            asn_bitString->buf[asn_bitString->size-1] &= 0xff << asn_bitString->bits_unused;
        }
    }

    std::bitset<COUNT> bits;
};


} /* element */
} /* v2x */

void free_BIT_STRING_t(BIT_STRING_t *bs);

#endif /* BIT_STRING_HPP_ */
