# Drop

Drops n lines from stdin (reverse _head_) and forwards remaining lines to stdout

## Installation

```
% make
% make install
```

## Usage

```
% seq 1 3
1
2
3
% seq 1 3 | drop
2
3
% seq 1 3 | drop 2
3
```
