# Shutdown++
A shutdown command that executes commands before system shutdown is started to safely stop a servers processes. Alternatively it can be used to shutdown parts of a system.

## Usage
```
shutdown++ [options]
```

## Options
```
-p <path>    Path to the config file
-yp <path>   Path to config file and yes to all prompts
-y           Yes to all prompts (Only for default config file)
-f           Force shutdown
-v           Show version
-h           Show this help message
```

# Config file
Shutdown++ Reads from a config file. The config file should look like this
```toml
# This is a comment
commands = command 1, command 2, command 3
```
Each command is separated with a comma.  Comments are marked with a `#`

The default config file is at `~/.config/shutdown.conf`

Multiple config files can be saves and used with the `-p` option.
```
shutdown++ -p /path/to/config
```

## Example
This is an example config file that stops a server, removes all files in `~/server_tmp` and then shuts down the system.
```toml
commands = systemctl stop server.service, rm -rf ~/server_tmp/*, sudo shutdown now
```
## Build
### prerequisites
- make
- g++

### Build using make
```bash
make
```

### Build using g++
```bash
g++ -std=c++17 -o shutdown++ src/main.cpp
```
