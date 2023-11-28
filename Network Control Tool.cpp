#include <iostream>
#include <Windows.h>
#include <iphlpapi.h>
#include <string>

#pragma comment(lib, "IPHLPAPI.lib")

void enableNetworkAdapter(const std::string& interfaceName) {
    std::string command = "netsh interface set interface \"" + interfaceName + "\" enable";
    std::system(command.c_str());
    std::cout << "Network adapter enabled.\n";
}

void disableNetworkAdapter(const std::string& interfaceName) {
    std::string command = "netsh interface set interface \"" + interfaceName + "\" disable";
    std::system(command.c_str());
    std::cout << "Network adapter disabled.\n";
}

void configureIPAddress(const std::string& interfaceName, const std::string& ipAddress, const std::string& subnetMask, const std::string& gateway) {
    std::string command = "netsh interface ipv4 set address \"" + interfaceName + "\" static " + ipAddress + " " + subnetMask + " " + gateway;
    std::system(command.c_str());
    std::cout << "IP address configured.\n";
}

void configureDNS(const std::string& interfaceName, const std::string& dnsAddress) {
    std::string command = "netsh interface ipv4 set dns \"" + interfaceName + "\" static " + dnsAddress;
    std::system(command.c_str());
    std::cout << "DNS configured.\n";
}

void manageFirewall(bool enable) {
    std::string command = enable ? "netsh advfirewall set allprofiles state on" : "netsh advfirewall set allprofiles state off";
    std::system(command.c_str());
    std::cout << "Firewall " << (enable ? "enabled" : "disabled") << ".\n";
}

void displayMenu() {
    std::cout << "Network Control Tool\n";
    std::cout << "1. Enable Network Adapter\n";
    std::cout << "2. Disable Network Adapter\n";
    std::cout << "3. Configure IP Address\n";
    std::cout << "4. Configure DNS\n";
    std::cout << "5. Manage Firewall\n";
    std::cout << "6. Exit\n";
    std::cout << "Enter your choice: ";
}

int main() {
    std::string interfaceName = "Wi-Fi"; // Replace 'Wi-Fi' with your network interface name
    std::string ipAddress = "192.168.1.100"; // Replace with desired IP address
    std::string subnetMask = "255.255.255.0"; // Replace with desired subnet mask
    std::string gateway = "192.168.1.1"; // Replace with desired gateway
    std::string dnsAddress = "8.8.8.8"; // Replace with desired DNS address

    int choice;
    while (true) {
        displayMenu();
        std::cin >> choice;

        switch (choice) {
            case 1:
                enableNetworkAdapter(interfaceName);
                break;
            case 2:
                disableNetworkAdapter(interfaceName);
                break;
            case 3:
                configureIPAddress(interfaceName, ipAddress, subnetMask, gateway);
                break;
            case 4:
                configureDNS(interfaceName, dnsAddress);
                break;
            case 5:
                manageFirewall(true); // Enable Firewall
                break;
            case 6:
                manageFirewall(false); // Disable Firewall before exiting
                std::cout << "Exiting...\n";
                return 0;
            default:
                std::cout << "Invalid choice!\n";
        }
    }

    return 0;
}
