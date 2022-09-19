#ifndef H_ADDRESS
#define H_ADDRESS

#include <string>

namespace Billing {
	class address;

}

class Billing::address {
private:

	std::string number, streetName, Province, City;


public:
	address();
	address(std::string number, std::string streetName, std::string City, std::string Province);

	inline std::string getHouseNumber() { return number; }
	inline std::string getStreetName() { return streetName; }
	inline std::string getCity() { return City; }
	inline std::string getProvince() { return Province; }

	void setHouseNumber(std::string);
	void setStreetName(std::string);
	void setCity(std::string);
	void setProvince(std::string);

};

#endif

