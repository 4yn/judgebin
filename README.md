# judgebin

Bash scripts to help with competitive programming environment.

## Install

```
sudo cp j* /usr/local/bin
```

## Usage

Create a file for problem `mushrooms`

```
# "Judgebin INIT"
jinit mushrooms
```

Compile `mushrooms.cpp`

```
# "Judgebin COMPile"
jcomp mushrooms
```

Save a single sample testcase to `mushrooms.in` and `mushrooms.ans`, then test
the current code.

```
# "Judgebin GRADe"
jgrad mushrooms
```

Make a folder `mushrooms.tc/` with multiple sample testcases
`mushrooms.tc/1.in`, `mushrooms.tc/1.ans`, `mushrooms.tc/2.in`,
`mushrooms.tc/2.ans` and so on, then test the current code.

```
# "Judgebin Multiple GRADe"
jmgrad mushrooms
```

### Template

The template has various shorthand aliases to int64 / vector / pair types as
well as some input/output and loop helpers.

The `.cpp` template also has a `debugf` method that acts similar to `printf` but
will

- Only be enabled if compiled using `jcomp` or with compiler flag `-DCP_LOCAL_DEBUG`
- Print debug output with terminal colors
- Ignore output when diff-ed using `jgrad`/`jmgrad`