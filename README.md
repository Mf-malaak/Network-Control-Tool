# Network Control Tool
```markdown
# Network Control Tool

This command-line utility tool for Windows provides functionalities to control network adapters, configure IP addresses, DNS settings, and manage the firewall. It uses the Windows `netsh` command for network configuration.

## Features

- **Enable Network Adapter:** Enables a specified network adapter.
- **Disable Network Adapter:** Disables a specified network adapter.
- **Configure IP Address:** Sets a static IP address, subnet mask, and gateway for a network adapter.
- **Configure DNS:** Sets the DNS address for a network adapter.
- **Manage Firewall:** Enables or disables the Windows firewall.
- **User-Friendly Interface:** Offers a simple menu-driven interface for ease of use.

## Prerequisites

- Windows operating system
- C++ compiler (Visual Studio or MinGW) for building the executable

## Usage

1. Clone or download the repository.
2. Open the project in your preferred C++ development environment.
3. Modify the default network interface name, IP address, subnet mask, gateway, and DNS address in the `main` function to match your network settings.
4. Compile the source code to generate the executable.
5. Run the executable as administrator to interact with the network control tool.

## Instructions

- Run the executable with administrator privileges to ensure proper access to network configurations.
- Follow the menu prompts to choose options for network adapter control, IP configuration, DNS settings, and firewall management.

## Disclaimer

- Use this tool responsibly and ensure you have the necessary permissions before altering network configurations.
- The tool may require administrative access to execute certain commands properly.
```
