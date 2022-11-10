#include "fleet.h"
#include <string>
#include <iostream>
#include <vector>

std::vector<Aeroplane> Fleet::instantiate_fleet(int number_of_planes)
{

	std::vector<Aeroplane> fleet;

	for (int i = 0; i < number_of_planes; i++)
	{
		Aeroplane aeroplane;
		if (i % 2 == 0)
		{
			aeroplane = Jet_Plane("Concorde", 100 + i, 5, 62, 12000.8, 2179.2, "British Aircraft Corporation");
		}
		else
		{
			aeroplane = Fighter_Aircraft("F22", 2 + i, 5, 22, 2000.0, 2414.016, 8);
		}

		fleet.push_back(aeroplane);
	}

	return fleet;
}

void Fleet::print_fleet_data(std::vector<Aeroplane> fleet)
{

	for (int i = 0; i < fleet.size(); i++)
	{
		std::cout << "Plane name: " << fleet[i].get_name() << std::endl;
		std::cout << "Current speed: " << fleet[i].fly() << std::endl;
		std::cout << "Top speed: " << fleet[i].get_top_speed() << std::endl;
		std::cout << "Autonomy: " << fleet[i].get_autonomy() << std::endl;
		std::cout << "Number of passengers: " << fleet[i].get_number_of_passengers() << std::endl;
		std::cout << "Number of Turbines: " << fleet[i].get_number_of_turbines() << std::endl;

		if (Fighter_Aircraft *aircraft = dynamic_cast<Fighter_Aircraft *>(&fleet[i]))
		{
			std::cout << "Number of missiles: " << aircraft->get_number_of_missiles() << std::endl;
			aircraft->shoot();
			std::cout << "Number of missiles: " << aircraft->get_number_of_missiles() << std::endl;
		}
		std::cout << std::endl;
	}
}