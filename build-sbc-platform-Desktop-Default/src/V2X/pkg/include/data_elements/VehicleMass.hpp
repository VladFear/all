#ifndef VEHICLE_MASS_HPP_
#define VEHICLE_MASS_HPP_

#include "VehicleMass.h"

/*
 * 7.211	Data Element: DE_VehicleMass
 * Use: The DE_VehicleMass data element represents  the estimated weight of the vehicle  over  a span  of stepwise  linear values.  
 * The  least  significant  bit  step  size  varies  from  50  kg,  to  500kg,  to  2000kg  as  noted  in  the  ASN.  
 * This  provides  a value range from zero to in excess of 170000 kg. The weight should reflect the current gross mass of vehicle 
 * and contents if known,Otherwise, an average laden value should be established. In cases where the weight is greater than 170000 Kg, 
 * the value of 254 shall be used.
 * 
 * ASN.1 Representation: VehicleMass ::= INTEGER (0..255)
 *  --Values 000 to 080 in steps of 50 kg
 *  --Values 081 to 200 in steps of 500 kg
 *  --Values 201 to 253 in steps of 2000 kg
 *  --The Value 254 shall be used for weights above 170000 kg
 *  --The Value 255 shall be used when the value is unknown or unavailable
 *  --Encodedsuch that the values:
 *  	--81 represents 4500 kg
 *  	--181 represents 54500 kg
 *  	--253 represents 170000 kg
 * Used By: This entry is directly used by the following 3 other data structures in this standard (record type, descriptive name, ASN.1, 
 * and XML name (if present) of each):
 *  DF 	DF_VehicleData					<ASN>, and
 *  DF 	DF_VehicleStatus				<ASN>, and
 *  MSG	MSG_EmergencyVehicleAlert (EVA)	<ASN>.
 * In addition, this item may be used by data structures in other ITS standards.Remarks: See also the DE_TrailerMass data element.
s */

namespace v2x {
namespace element {

class CVehicleMass {
  public:
    explicit CVehicleMass();
    CVehicleMass(const VehicleMass_t &value);
    virtual ~CVehicleMass();
    CVehicleMass(const CVehicleMass &value);

    explicit operator VehicleMass_t() const;
    void set(VehicleMass_t const& value);

    CVehicleMass& operator=(const CVehicleMass& other);

    bool operator==(const CVehicleMass& other) const;
    bool operator!=(const CVehicleMass& other) const;
    bool operator<(const CVehicleMass& other) const;
    bool operator>(const CVehicleMass& other) const;

  private:
    VehicleMass_t value_;
};

} /* element */
} /* v2x */

#endif /* VEHICLE_MASS_HPP_ */
