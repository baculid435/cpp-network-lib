// Copyright (C) 2023  "Michael G. Morey" <mgmorey@gmail.com>

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <https://www.gnu.org/licenses/>.

#include "network/write-string.h"       // Socket, descriptor_type,
                                        // ssize_t, write_string()
#include "network/to-integer.h"         // to_integer()
#include "network/write.h"              // write()

auto Network::write(const std::string& str, const Socket& sock) -> ssize_t
{
    return write(str.data(), str.size(), sock);
}
