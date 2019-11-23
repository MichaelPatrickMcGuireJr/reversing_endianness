# Endianness
We concern ourselves with endianness when dealing with streaming data from serialized devices.  Some devices send their payloads with the most significant bit first, others with the most significant bit last.  In order to retrieve the actual data from a payload, we may need to reverse the endianness before reconstructing the serialized from the bits received into a data-structure.
