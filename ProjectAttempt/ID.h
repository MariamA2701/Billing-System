#ifndef H_ID
#define H_ID

#include <string>

namespace FullID {
	class FullName;

}


class FullID::FullName {
private:
	std::string FirstName, LastName, IDnumber;



public:
	FullName();
	FullName(std::string Firstname, std::string LastName, std::string IDnumber);


	inline std::string getFirstName() { return FirstName; }
	inline std::string getLastName() { return LastName; }
	inline std::string getIDnumber() { return IDnumber; }

	void setFirstName(std::string);
	void setLastName(std::string);
	void setIDnumber(std::string);


};


#endif
