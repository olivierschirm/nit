# 1. Nit source:
<A: true a 0.123 1234 asdf false p4ssw0rd>

# 2. MsgPack:
\x93\xD4\x7B\x00\xA1\x41\x86\xA1\x62\xC3\xA1\x63\xD4\x7C\x61\xA1\x66\xCB\x3F\xBF\x97\x24\x74\x53\x8E\xF3\xA1\x69\xCD\x04\xD2\xBB\x73\x65\x72\x69\x61\x6C\x69\x7A\x61\x74\x69\x6F\x6E\x5F\x73\x70\x65\x63\x69\x66\x69\x63\x5F\x6E\x61\x6D\x65\xA4\x61\x73\x64\x66\xA1\x6E\xC0

# 3. JSON:
[{
	"typ": 123,
	"data": [0]
}, "A", {
	"b": true,
	"c": {
		"typ": 124,
		"data": [97]
	},
	"f": 0.123,
	"i": 1234,
	"serialization_specific_name": "asdf",
	"n": null
}]

# 4. Back in Nit (with metadata):
<A: true a 0.123 1234 asdf false p4ssw0rd>

# 1. Nit source:
<B: <A: false b 123.123 2345 hjkl true p4ssw0rd> 1111 qwer>

# 2. MsgPack:
\x93\xD4\x7B\x00\xA1\x42\x88\xA1\x62\xC2\xA1\x63\xD4\x7C\x62\xA1\x66\xCB\x40\x5E\xC7\xDF\x3B\x64\x5A\x1D\xA1\x69\xCD\x09\x29\xBB\x73\x65\x72\x69\x61\x6C\x69\x7A\x61\x74\x69\x6F\x6E\x5F\x73\x70\x65\x63\x69\x66\x69\x63\x5F\x6E\x61\x6D\x65\xA4\x68\x6A\x6B\x6C\xA1\x6E\x0C\xA2\x69\x69\xCD\x04\x57\xA2\x73\x73\xA4\x71\x77\x65\x72

# 3. JSON:
[{
	"typ": 123,
	"data": [0]
}, "B", {
	"b": false,
	"c": {
		"typ": 124,
		"data": [98]
	},
	"f": 123.123,
	"i": 2345,
	"serialization_specific_name": "hjkl",
	"n": 12,
	"ii": 1111,
	"ss": "qwer"
}]

# 4. Back in Nit (with metadata):
<B: <A: false b 123.123 2345 hjkl true p4ssw0rd> 1111 qwer>

# 1. Nit source:
<C: <A: true a 0.123 1234 asdf false p4ssw0rd> <B: <A: false b 123.123 2345 hjkl true p4ssw0rd> 1111 qwer>>

# 2. MsgPack:
\x93\xD4\x7B\x00\xA1\x43\x83\xA1\x61\x93\xD4\x7B\x01\xA1\x41\x86\xA1\x62\xC3\xA1\x63\xD4\x7C\x61\xA1\x66\xCB\x3F\xBF\x97\x24\x74\x53\x8E\xF3\xA1\x69\xCD\x04\xD2\xBB\x73\x65\x72\x69\x61\x6C\x69\x7A\x61\x74\x69\x6F\x6E\x5F\x73\x70\x65\x63\x69\x66\x69\x63\x5F\x6E\x61\x6D\x65\xA4\x61\x73\x64\x66\xA1\x6E\xC0\xA1\x62\x93\xD4\x7B\x02\xA1\x42\x88\xA1\x62\xC2\xA1\x63\xD4\x7C\x62\xA1\x66\xCB\x40\x5E\xC7\xDF\x3B\x64\x5A\x1D\xA1\x69\xCD\x09\x29\xBB\x73\x65\x72\x69\x61\x6C\x69\x7A\x61\x74\x69\x6F\x6E\x5F\x73\x70\x65\x63\x69\x66\x69\x63\x5F\x6E\x61\x6D\x65\xA4\x68\x6A\x6B\x6C\xA1\x6E\x0C\xA2\x69\x69\xCD\x04\x57\xA2\x73\x73\xA4\x71\x77\x65\x72\xA2\x61\x61\xD4\x7D\x01

# 3. JSON:
[{
	"typ": 123,
	"data": [0]
}, "C", {
	"a": [{
		"typ": 123,
		"data": [1]
	}, "A", {
		"b": true,
		"c": {
			"typ": 124,
			"data": [97]
		},
		"f": 0.123,
		"i": 1234,
		"serialization_specific_name": "asdf",
		"n": null
	}],
	"b": [{
		"typ": 123,
		"data": [2]
	}, "B", {
		"b": false,
		"c": {
			"typ": 124,
			"data": [98]
		},
		"f": 123.123,
		"i": 2345,
		"serialization_specific_name": "hjkl",
		"n": 12,
		"ii": 1111,
		"ss": "qwer"
	}],
	"aa": {
		"typ": 125,
		"data": [1]
	}
}]

# 4. Back in Nit (with metadata):
<C: <A: true a 0.123 1234 asdf false p4ssw0rd> <B: <A: false b 123.123 2345 hjkl true p4ssw0rd> 1111 qwer>>

# 1. Nit source:
<D: <B: <A: false b 123.123 2345 new line ->
<- false p4ssw0rd> 1111 	f"\/> true>

# 2. MsgPack:
\x93\xD4\x7B\x00\xA1\x44\x89\xA1\x62\xC2\xA1\x63\xD4\x7C\x62\xA1\x66\xCB\x40\x5E\xC7\xDF\x3B\x64\x5A\x1D\xA1\x69\xCD\x09\x29\xBB\x73\x65\x72\x69\x61\x6C\x69\x7A\x61\x74\x69\x6F\x6E\x5F\x73\x70\x65\x63\x69\x66\x69\x63\x5F\x6E\x61\x6D\x65\xAE\x6E\x65\x77\x20\x6C\x69\x6E\x65\x20\x2D\x3E\x0A\x3C\x2D\xA1\x6E\xC0\xA2\x69\x69\xCD\x04\x57\xA2\x73\x73\xA6\x09\x66\x22\x0D\x5C\x2F\xA1\x64\xD4\x7D\x00

# 3. JSON:
[{
	"typ": 123,
	"data": [0]
}, "D", {
	"b": false,
	"c": {
		"typ": 124,
		"data": [98]
	},
	"f": 123.123,
	"i": 2345,
	"serialization_specific_name": "new line ->\n<-",
	"n": null,
	"ii": 1111,
	"ss": "\tf\"\r\\/",
	"d": {
		"typ": 125,
		"data": [0]
	}
}]

# 4. Back in Nit (with metadata):
<D: <B: <A: false b 123.123 2345 new line ->
<- false p4ssw0rd> 1111 	f"\/> true>

# 1. Nit source:
<E: a: hello, 1234, 123.4; b: hella, 2345, 234.5>

# 2. MsgPack:
\x93\xD4\x7B\x00\xA1\x45\x82\xA1\x61\x93\xD4\x7B\x01\xA5\x41\x72\x72\x61\x79\x93\xA5\x68\x65\x6C\x6C\x6F\xCD\x04\xD2\xCB\x40\x5E\xD9\x99\x99\x99\x99\x9A\xA1\x62\x93\xD4\x7B\x02\xA5\x41\x72\x72\x61\x79\x93\xA5\x68\x65\x6C\x6C\x61\xCD\x09\x29\xCB\x40\x6D\x50\x00\x00\x00\x00\x00

# 3. JSON:
[{
	"typ": 123,
	"data": [0]
}, "E", {
	"a": [{
		"typ": 123,
		"data": [1]
	}, "Array", ["hello", 1234, 123.4]],
	"b": [{
		"typ": 123,
		"data": [2]
	}, "Array", ["hella", 2345, 234.5]]
}]

# 4. Back in Nit (with metadata):
<E: a: hello, 1234, 123.4; b: hella, 2345, 234.5>

# 1. Nit source:
<F: 2222>

# 2. MsgPack:
\x93\xD4\x7B\x00\xA1\x46\x81\xA1\x6E\xCD\x08\xAE

# 3. JSON:
[{
	"typ": 123,
	"data": [0]
}, "F", {
	"n": 2222
}]

# 4. Back in Nit (with metadata):
null

# 1. Nit source:
<F: 33.33>

# 2. MsgPack:
\x93\xD4\x7B\x00\xA1\x46\x81\xA1\x6E\xCB\x40\x40\xAA\x3D\x70\xA3\xD7\x0A

# 3. JSON:
[{
	"typ": 123,
	"data": [0]
}, "F", {
	"n": 33.33
}]

# 4. Back in Nit (with metadata):
null

# 1. Nit source:
<G: hs: -1, 0; s: one, two; hm: one. 1, two. 2; am: three. 3, four. 4>

# 2. MsgPack:
\x93\xD4\x7B\x00\xA1\x47\x84\xA2\x68\x73\x93\xD4\x7B\x01\xA7\x48\x61\x73\x68\x53\x65\x74\x92\xFF\x00\xA1\x73\x93\xD4\x7B\x02\xA8\x41\x72\x72\x61\x79\x53\x65\x74\x92\xA3\x6F\x6E\x65\xA3\x74\x77\x6F\xA2\x68\x6D\x93\xD4\x7B\x03\xA7\x48\x61\x73\x68\x4D\x61\x70\x82\xA3\x6F\x6E\x65\x01\xA3\x74\x77\x6F\x02\xA2\x61\x6D\x93\xD4\x7B\x04\xA8\x41\x72\x72\x61\x79\x4D\x61\x70\x82\xA5\x74\x68\x72\x65\x65\xA1\x33\xA4\x66\x6F\x75\x72\xA1\x34

# 3. JSON:
[{
	"typ": 123,
	"data": [0]
}, "G", {
	"hs": [{
		"typ": 123,
		"data": [1]
	}, "HashSet", [-1, 0]],
	"s": [{
		"typ": 123,
		"data": [2]
	}, "ArraySet", ["one", "two"]],
	"hm": [{
		"typ": 123,
		"data": [3]
	}, "HashMap", {
		"one": 1,
		"two": 2
	}],
	"am": [{
		"typ": 123,
		"data": [4]
	}, "ArrayMap", {
		"three": "3",
		"four": "4"
	}]
}]

# 4. Back in Nit (with metadata):
<G: hs: ; s: ; hm: ; am: >

