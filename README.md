# Quantum-Key-Distribution

Quantum Key Distribution (QKD) simulator that follows the BB84 protocol. 

This tool simulates the process of encoding a bit-sequence key using the polarization of photons. 

Example:<br>

Alice Bits:    1 0 1 0 0 0 1 0 1 1 <br>
Alice Bases:   0 1 0 0 1 0 1 1 1 0 <br>
Encoded Key:   90 45 90 0 45 0 135 45 135 90 <br>

Explanation:<br>
The encoder has two sets of bases to pick from:<br>

0 = {0, 90)<br>
1 = {45, 135}<br>

If the i-th bit is a 0, and the base is a 0, the photon's polarization angle remains zero.<br>
If the i-th bit is 0, and the base is 1, the photon's polarization angle is changed to 45.<br>
The same logic occurs for bit = 1. <br>

There are two possible scenarios for the decoder:

-  Decoder has the same bases as the encoder
-  Decoder has a random set of bases

If the decoder has the same bases as the encoder, they will receive the full key.
If the decoder has a random set of bases, they will occasionally receive the full key. 

## Compile/Run instructions:

```
make all
```

Builds the program

```
./main
```

Runs through the test in main.cc