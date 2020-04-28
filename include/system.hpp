// Tarea 3
// Copyright © 2020 otreblan
//
// tarea-3 is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// tarea-3 is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with tarea-3.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <argParser.hpp>

#include <filesystem>


namespace aru
{

namespace fs = std::filesystem;

class System
{
private:
	ArgParser& args;

	fs::path cache_dir;
	fs::path bicycle;
	fs::path truck;

	bool track(const std::string& user);
	bool order(const std::string& user,
		const std::string& destination,
		const Vehicle vehicle,
		const std::map<aru::Products, int>& order);
	bool list();
	bool list_print(std::ifstream& os, const std::string& vehicle);
public:
	System(ArgParser& args);
	virtual ~System();

	bool start();
};

}
