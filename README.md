# bclc
A lightweight CLI tool for base conversions written in bash.

## Features
- Decimal to binary
- Binary to decimal
- Hexadecimal to binary
- Binary to hexadecimal

## Installation
```bash
git clone https://github.com/yourusername/bclc.git
cd bclc
chmod +x bclc.sh
```

## Usage
```bash
./bclc.sh [flag] [value]
```

## Flags

| Flag | Description | Example |
|------|-------------|---------|
| `-db` | Decimal to binary | `./bclc.sh -db 276` |
| `-bd` | Binary to decimal | `./bclc.sh -bd 100010100` |
| `-hb` | Hexadecimal to binary | `./bclc.sh -hb 1C00F6` |
| `-bh` | Binary to hexadecimal | `./bclc.sh -bh 10011111` |

## Examples
```bash
$ ./bclc.sh -db 276
100010100

$ ./bclc.sh -bd 100010100
276

$ ./bclc.sh -hb 1C00F6
0001 1100 0000 0000 1111 0110

$ ./bclc.sh -bh 10011111
9F
```

## Error Handling
bclc validates input before processing and returns descriptive errors:
```bash
$ ./bclc.sh -bd 123abc
input_error: invalid binary

$ ./bclc.sh -db hello
input_error: invalid decimal

$ ./bclc.sh -hb XYZ
input_error: invalid hexadecimal

$ ./bclc.sh -xx 123
flag_error: unrecognized flag
```
