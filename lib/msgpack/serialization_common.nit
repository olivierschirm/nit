# This file is part of NIT ( http://www.nitlanguage.org ).
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

# Serialization services for `serialization_write` and `serialization_read`
module serialization_common

# MessagePack serialization or deserialization engine
abstract class MsgPackEngine

	# *ext type* byte for object definitions, defaults to 0x7Bu8 or '{'
	var ext_typ_obj: Byte = 0x7Bu8 is writable

	# *ext type* byte for object references, defaults to 0x7Du8 or '}'
	var ext_typ_ref: Byte = 0x7Du8 is writable

	# *ext type* byte to identify a char, defaults to 0x7Cu8 or '~'
	var ext_typ_char: Byte = 0x7Cu8 is writable

	# *ext type* byte to identify a byte, defaults to 0x7Eu8 or '|'
	var ext_typ_byte: Byte = 0x7Eu8 is writable
end
