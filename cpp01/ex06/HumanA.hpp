
#ifndef HUMANA_HPP
#define HUMANA_HPP

# include <iostream>
# include <string>

# include "Weapon.hpp"

class HumanA
{
	public:
		HumanA();
		HumanA(HumanA const& copy);
		~HumanA();

		void attack();

	private:
		std::string _name;
		Weapon 		&_weaponA;

};

#endif
