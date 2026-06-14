# bclc
A lightweight CLI tool for base conversions written in bash.

## Features
- Decimal to binary
- Binary to decimal
- Hexadecimal to binary
- Binary to hexadecimal
- Binary to octal
- Octal to binary
- Decimal to hexadecimal

## Installation
```bash
git clone https://github.com/yourusername/bclc.git
cd bclc
chmod +x bclc.sh
```

## Usage
```bash
./bclc [flag] [value]
```

## Flags

| Flag | Description | Example |
|------|-------------|---------|
| `-db` | Decimal to binary | `./bclc -db 276` |
| `-bd` | Binary to decimal | `./bclc -bd 100010100` |
| `-hb` | Hexadecimal to binary | `./bclc -hb 1C00F6` |
| `-bh` | Binary to hexadecimal | `./bclc -bh 10011111` |
| `-bo` | Binary to octal | `./bclc -bo 10011111` |
| `-ob` | Octal to binary | `./bclc -ob 172` |
| `-dh` | Decimal to hexadecimal | `./bclc -dh 65636` |

## Examples
```bash
$ ./bclc -db 276
100010100

$ ./bclc -bd 100010100
276

$ ./bclc -hb 1C00F6
0001 1100 0000 0000 1111 0110

$ ./bclc -bh 10011111
9F
```

## Error Handling
bclc validates input before processing and returns descriptive errors:
```bash
$ ./bclc -bd 123abc
input_error: invalid binary

$ ./bclc -db hello
input_error: invalid decimal

$ ./bclc -hb XYZ
input_error: invalid hexadecimal

$ ./bclc -xx 123
flag_error: unrecognized flag
```
