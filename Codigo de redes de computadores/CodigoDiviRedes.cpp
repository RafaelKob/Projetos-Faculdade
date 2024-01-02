#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <sstream>
using namespace std;

struct Subnet {
    string name;
    string ipRede;
    string ip1;
    string ip2;
    string ipBroad;
    string subnetMask;
    int numHosts;
};

vector<int> dividirIP(const string& ip_str) {
    vector<int> partesIP;
    stringstream ss(ip_str);
    string parteIP;
    char delimitador = '.';

    while (getline(ss, parteIP, delimitador)) {
        int num = stoi(parteIP);
        partesIP.push_back(num);
    }

    return partesIP;
}

char definirClasse (int bitsRede) {
    char tipo;
    if (bitsRede>= 8 && bitsRede<16) {
        tipo = 'A';
    } else if (bitsRede>=16 && bitsRede<24) {
        tipo = 'B';
    } else if (bitsRede>=24 && bitsRede<32) {
        tipo = 'C';
    } else {
        cout<<"Não foi possivel classificar";
    }
    
    return tipo;
}

vector<Subnet> divideRedeC(const string& ipRede, int bitsRede, int numSubnets) {
    vector<Subnet> subnets;

    // Verifica se o número de sub-redes é válido
    int maxSubnets = pow(2, 32 - bitsRede);
    if (numSubnets > maxSubnets) {
        cout << "Número de sub-redes inválido para o comprimento do prefixo especificado." << endl;
        return subnets;
    }
    
     // Calcula o número de bits adicionais necessários para as sub-redes
    int bitsNeeded = static_cast<int>(ceil(log2(numSubnets)));

    // Calcula o número de hosts por sub-rede
    int hostsPerSubnet = pow(2, 32 - bitsRede - bitsNeeded) - 2;
    
     // Calcula o primeiro intervalo e o primeiro endereço de broadcast
    string ip1;
    string ip2;
    string ipBroad;
    vector<int> ip = dividirIP(ipRede);
    
    ip1 = to_string(ip[0]) + "." + to_string(ip[1]) + "." + to_string(ip[2]) + ".1";
    ip2 = to_string(ip[0]) + "." + to_string(ip[1]) + "." + to_string(ip[2]) + "." + to_string(hostsPerSubnet);
    ipBroad = to_string(ip[0]) + "." + to_string(ip[1]) + "." + to_string(ip[2]) + "." + to_string(hostsPerSubnet+1);
    
    // Divide a rede em sub-redes
    int subnetIndex = 1;
    string subnetIpRede = ipRede;
    string subnetIp1 = ip1;
    string subnetIp2 = ip2;
    string subnetIpBroad = ipBroad;
    
    
    //atualição dos ips
    for (int i = 0; i < numSubnets; i++) {
        Subnet subnet;
        subnet.name = "Subnet " + to_string(subnetIndex);
        subnet.ipRede = subnetIpRede;
        subnet.ip1 = subnetIp1;
        subnet.ip2 = subnetIp2;
        subnet.ipBroad = subnetIpBroad;
        subnet.subnetMask = to_string(bitsRede + bitsNeeded);
        subnet.numHosts = hostsPerSubnet;
            
        vector <int> ipDiv = dividirIP(subnetIpRede);
            
        subnets.push_back(subnet);

        // Atualiza o endereço da próxima sub-rede
        subnetIpRede = to_string(ipDiv[0]) + "." + to_string(ipDiv[1]) + "." + to_string(ipDiv[2]) + "." + to_string(ipDiv[3] + hostsPerSubnet + 2);
        vector <int> ipDiv2 = dividirIP(subnetIpRede);
        subnetIp1 = to_string(ipDiv2[0]) + "." + to_string(ipDiv2[1]) + "." + to_string(ipDiv2[2]) + "." + to_string(ipDiv2[3] + 1);
        subnetIp2 = to_string(ipDiv2[0]) + "." + to_string(ipDiv2[1]) + "." + to_string(ipDiv2[2]) + "." + to_string(ipDiv2[3] + hostsPerSubnet);
        subnetIpBroad = to_string(ipDiv2[0]) + "." + to_string(ipDiv2[1]) + "." + to_string(ipDiv2[2]) + "." + to_string(ipDiv2[3] + hostsPerSubnet + 1);

        subnetIndex++;
            
        }
        
        return subnets;
    }
    
    
vector<Subnet> divideRedeB(const string& ipRede, int bitsRede, int numSubnets) {
    vector<Subnet> subnets;

    // Verifica se o número de sub-redes é válido
    int maxSubnets = pow(2, 32 - bitsRede);
    if (numSubnets > maxSubnets) {
        cout << "Número de sub-redes inválido para o comprimento do prefixo especificado." << endl;
        return subnets;
    }
    
     // Calcula o número de bits adicionais necessários para as sub-redes
    int bitsNeeded = static_cast<int>(ceil(log2(numSubnets)));

    // Calcula o número de hosts por sub-rede
    int hostsPerSubnet = pow(2, 32 - bitsRede - bitsNeeded) - 2;
    
     // Calcula o primeiro intervalo e o primeiro endereço de broadcast
    string ip1;
    string ip2;
    string ipBroad;
    vector<int> ip = dividirIP(ipRede);
    
    if (hostsPerSubnet<255) {
        ip1 = to_string(ip[0]) + "." + to_string(ip[1]) + "." + to_string(ip[2]) + ".1";
        ip2 = to_string(ip[0]) + "." + to_string(ip[1]) + "." + to_string(ip[2]) + "." + to_string(hostsPerSubnet);
        ipBroad = to_string(ip[0]) + "." + to_string(ip[1]) + "." + to_string(ip[2]) + "." + to_string(hostsPerSubnet+1);
    } else {
        int variaTerc = ip[2] + hostsPerSubnet/255;
        int variaQuar = ip[3]  + hostsPerSubnet%255;
        if (variaQuar<255) {
            ip1 = to_string(ip[0]) + "." + to_string(ip[1]) + "." + to_string(ip[2]) + ".1";
            ip2 = to_string(ip[0]) + "." + to_string(ip[1]) + "." + to_string(variaTerc) + "." + to_string(variaQuar);
            ipBroad = to_string(ip[0]) + "." + to_string(ip[1]) + "." + to_string(variaTerc) + "." + to_string(variaQuar+1);
        } else if (variaQuar == 255) {
            variaTerc = variaTerc + 1;
            ip1 = to_string(ip[0]) + "." + to_string(ip[1]) + "." + to_string(ip[2]) + ".1";
            ip2 = to_string(ip[0]) + "." + to_string(ip[1]) + "." + to_string(variaTerc) + "." + to_string(variaQuar);
            ipBroad = to_string(ip[0]) + "." + to_string(ip[1]) + "." + to_string(variaTerc) + "." + "0";
        } else {
            variaQuar=variaQuar-255;
            variaTerc = variaTerc + 1;
            ip1 = to_string(ip[0]) + "." + to_string(ip[1]) + "." + to_string(ip[2]) + ".1";
            ip2 = to_string(ip[0]) + "." + to_string(ip[1]) + "." + to_string(variaTerc) + "." + to_string(variaQuar);
            ipBroad = to_string(ip[0]) + "." + to_string(ip[1]) + "." + to_string(variaTerc) + "." + to_string(variaQuar+1);
        }
    }
    
    // Divide a rede em sub-redes
    int subnetIndex = 1;
    string subnetIpRede = ipRede;
    string subnetIp1 = ip1;
    string subnetIp2 = ip2;
    string subnetIpBroad = ipBroad;
    
    
    //atualição dos ips
    for (int i = 0; i < numSubnets; i++) {
        Subnet subnet;
        subnet.name = "Subnet " + to_string(subnetIndex);
        subnet.ipRede = subnetIpRede;
        subnet.ip1 = subnetIp1;
        subnet.ip2 = subnetIp2;
        subnet.ipBroad = subnetIpBroad;
        subnet.subnetMask = to_string(bitsRede + bitsNeeded);
        subnet.numHosts = hostsPerSubnet;
            
        vector <int> ipDiv = dividirIP(subnetIpRede);
            
        subnets.push_back(subnet);

        // Atualiza o endereço da próxima sub-rede
        if (hostsPerSubnet<255) {
            int variaQuar0 = ipDiv[3] + hostsPerSubnet + 2;
            if (variaQuar0 < 255) {
                subnetIpRede = to_string(ipDiv[0]) + "." + to_string(ipDiv[1]) + "." + to_string(ipDiv[2]) + "." + to_string(variaQuar0);
                vector <int> ipDiv2 = dividirIP(subnetIpRede);
                int variaQuar00 = ipDiv2[3] + hostsPerSubnet;
                if (variaQuar00<255) {
                    subnetIp1 = to_string(ipDiv2[0]) + "." + to_string(ipDiv2[1]) + "." + to_string(ipDiv2[2]) + "." + to_string(ipDiv2[3] + 1);
                    subnetIp2 = to_string(ipDiv2[0]) + "." + to_string(ipDiv2[1]) + "." + to_string(ipDiv2[2]) + "." + to_string(variaQuar00);
                    subnetIpBroad = to_string(ipDiv2[0]) + "." + to_string(ipDiv2[1]) + "." + to_string(ipDiv2[2]) + "." + to_string(variaQuar00 + 1);
                } else {
                    variaQuar00=variaQuar00-255;
                    int variaTerc00 = ipDiv2[2] + 1;
                    subnetIp1 = to_string(ipDiv2[0]) + "." + to_string(ipDiv2[1]) + "." + to_string(ipDiv2[2]) + "." + to_string(ipDiv2[3] + 1);
                    subnetIp2 = to_string(ipDiv2[0]) + "." + to_string(ipDiv2[1]) + "." + to_string(variaTerc00) + "." + to_string(variaQuar00);
                    subnetIpBroad = to_string(ipDiv2[0]) + "." + to_string(ipDiv2[1]) + "." + to_string(variaTerc00) + "." + to_string(variaQuar00 + 1);
                }
            } else {
                variaQuar0 = variaQuar0 - 255;
                int variaTerc0 = ipDiv[2] + 1;
                subnetIpRede = to_string(ipDiv[0]) + "." + to_string(ipDiv[1]) + "." + to_string(variaTerc0) + "." + to_string(variaQuar0);
                vector <int> ipDiv2 = dividirIP(subnetIpRede);
                int variaQuar00 = ipDiv2[3] + hostsPerSubnet;
                if (variaQuar00<255) {
                    subnetIp1 = to_string(ipDiv2[0]) + "." + to_string(ipDiv2[1]) + "." + to_string(ipDiv2[2]) + "." + to_string(ipDiv2[3] + 1);
                    subnetIp2 = to_string(ipDiv2[0]) + "." + to_string(ipDiv2[1]) + "." + to_string(ipDiv2[2]) + "." + to_string(variaQuar00);
                    subnetIpBroad = to_string(ipDiv2[0]) + "." + to_string(ipDiv2[1]) + "." + to_string(ipDiv2[2]) + "." + to_string(variaQuar00 + 1);
                } else {
                    variaQuar00=variaQuar00-255;
                    int variaTerc00 = ipDiv2[2] + 1;
                    subnetIp1 = to_string(ipDiv2[0]) + "." + to_string(ipDiv2[1]) + "." + to_string(ipDiv2[2]) + "." + to_string(ipDiv2[3] + 1);
                    subnetIp2 = to_string(ipDiv2[0]) + "." + to_string(ipDiv2[1]) + "." + to_string(variaTerc00) + "." + to_string(variaQuar00);
                    subnetIpBroad = to_string(ipDiv2[0]) + "." + to_string(ipDiv2[1]) + "." + to_string(variaTerc00) + "." + to_string(variaQuar00 + 1);
                }
            }
        subnetIndex++;   
        } else {
            int variaTerc1 = ipDiv[2] + hostsPerSubnet/255;
            int variaQuar1 = ipDiv[3]  + hostsPerSubnet%255;
                if (variaQuar1<253) {
                    subnetIpRede = to_string(ipDiv[0]) + "." + to_string(ipDiv[1]) + "." + to_string(variaTerc1) + "." + to_string(variaQuar1+2);
                } else {
                    variaQuar1=variaQuar1-255;
                    subnetIpRede = to_string(ipDiv[0]) + "." + to_string(ipDiv[1]) + "." + to_string(variaTerc1+1) + "." + to_string(variaQuar1);
                }
            vector <int> ipDiv2 = dividirIP(subnetIpRede);
            int variaTerc2 = ipDiv2[2] + hostsPerSubnet/255;
            int variaQuar2 = ipDiv2[3]  + hostsPerSubnet%255;
                if (variaQuar2<253) {
                    subnetIp1 = to_string(ipDiv2[0]) + "." + to_string(ipDiv2[1]) + "." + to_string(ipDiv2[2]) + "." + to_string(ipDiv2[3]+1);
                    subnetIp2 = to_string(ipDiv2[0]) + "." + to_string(ipDiv2[1]) + "." + to_string(variaTerc2) + "." + to_string(variaQuar2+1);
                    subnetIpBroad = to_string(ipDiv2[0]) + "." + to_string(ipDiv2[1]) + "." + to_string(variaTerc2) + "." + to_string(variaQuar2+2);
                } else {
                    subnetIp1 = to_string(ipDiv2[0]) + "." + to_string(ipDiv2[1]) + "." + to_string(variaTerc1+1) + "." + to_string(ipDiv2[3]+1);
                    subnetIp2 = to_string(ipDiv2[0]) + "." + to_string(ipDiv2[1]) + "." + to_string(variaTerc2+1) + "." + to_string(variaQuar2-255);
                    if (variaQuar2-255!=0) {
                        subnetIpBroad = to_string(ipDiv2[0]) + "." + to_string(ipDiv2[1]) + "." + to_string(variaTerc2+1) + "." + to_string(variaQuar2-254);
                    } else {
                        subnetIpBroad = to_string(ipDiv2[0]) + "." + to_string(ipDiv2[1]) + "." + to_string(variaTerc2+2) + "." + "255";
                    }
                }
        subnetIndex++;
            }
            
    }
        
        return subnets;
}


vector<Subnet> divideRedeA(const string& ipRede, int bitsRede, int numSubnets) {
    vector<Subnet> subnets;

    // Verifica se o número de sub-redes é válido
    int maxSubnets = pow(2, 32 - bitsRede);
    if (numSubnets > maxSubnets) {
        cout << "Número de sub-redes inválido para o comprimento do prefixo especificado." << endl;
        return subnets;
    }
    
     // Calcula o número de bits adicionais necessários para as sub-redes
    int bitsNeeded = static_cast<int>(ceil(log2(numSubnets)));

    // Calcula o número de hosts por sub-rede
    int hostsPerSubnet = pow(2, 32 - bitsRede - bitsNeeded) - 2;
    
     // Calcula o primeiro intervalo e o primeiro endereço de broadcast
    string ip1;
    string ip2;
    string ipBroad;
    vector<int> ip = dividirIP(ipRede);
    
    if (hostsPerSubnet<255) {
        ip1 = to_string(ip[0]) + "." + to_string(ip[1]) + "." + to_string(ip[2]) + ".1";
        ip2 = to_string(ip[0]) + "." + to_string(ip[1]) + "." + to_string(ip[2]) + "." + to_string(hostsPerSubnet);
        ipBroad = to_string(ip[0]) + "." + to_string(ip[1]) + "." + to_string(ip[2]) + "." + to_string(hostsPerSubnet+1);
    } else if (hostsPerSubnet>= 255 && hostsPerSubnet < (255-ip[2])*(255-ip[3])) {
        int variaTerc = ip[2] + hostsPerSubnet/255;
        int variaQuar = ip[3]  + hostsPerSubnet%255;
        if (variaQuar<255) {
            ip1 = to_string(ip[0]) + "." + to_string(ip[1]) + "." + to_string(ip[2]) + ".1";
            ip2 = to_string(ip[0]) + "." + to_string(ip[1]) + "." + to_string(variaTerc) + "." + to_string(variaQuar);
            ipBroad = to_string(ip[0]) + "." + to_string(ip[1]) + "." + to_string(variaTerc) + "." + to_string(variaQuar+1);
        } else if (variaQuar == 255) {
            ip1 = to_string(ip[0]) + "." + to_string(ip[1]) + "." + to_string(ip[2]) + ".1";
            ip2 = to_string(ip[0]) + "." + to_string(ip[1]) + "." + to_string(variaTerc) + "." + to_string(variaQuar);
            ipBroad = to_string(ip[0]) + "." + to_string(ip[1]) + "." + to_string(variaTerc + 1) + "." + "0";
        } else {
            variaQuar = variaQuar-255;
            variaTerc = variaTerc + 1;
            ip1 = to_string(ip[0]) + "." + to_string(ip[1]) + "." + to_string(ip[2]) + ".1";
            ip2 = to_string(ip[0]) + "." + to_string(ip[1]) + "." + to_string(variaTerc) + "." + to_string(variaQuar);
            ipBroad = to_string(ip[0]) + "." + to_string(ip[1]) + "." + to_string(variaTerc) + "." + to_string(variaQuar+1);
        }
    } /* else if (hostsPerSubnet == (255-ip[2])*(255-ip[3])) {
        ip1 = to_string(ip[0]) + "." + to_string(ip[1]) + "." + to_string(ip[2]) + ".1";
        ip2 = to_string(ip[0]) + "." + to_string(ip[1]) + ".255.255";
        ipBroad = to_string(ip[0]) + "." + to_string(ip[1]+1) + ".0.0";
    } else if (hostsPerSubnet > (255-ip[2])*(255-ip[3])) {
        int variaSeg = ip[1] + hostsPerSubnet/(255*255);
        int variaQuar = ip[3]  + (hostsPerSubnet%(255*255))/variaSeg;
        int variaTerc = ip[2] + variaQuar/255;
        if (variaQuar<255 && variaTerc<255) {
            ip1 = to_string(ip[0]) + "." + to_string(ip[1]) + "." + to_string(ip[2]) + ".1";
            ip2 = to_string(ip[0]) + "." + to_string(variaSeg) + to_string(variaTerc) + to_string(variaQuar);
            ipBroad = to_string(ip[0]) + "." + to_string(variaSeg) + to_string(variaTerc) + to_string(variaQuar+1);
        } else if (variaQuar == 255 && variaTerc < 255) {
            ip1 = to_string(ip[0]) + "." + to_string(ip[1]) + "." + to_string(ip[2]) + ".1";
            ip2 = to_string(ip[0]) + "." + to_string(variaSeg) + to_string(variaTerc) + ".255";
            ipBroad = to_string(ip[0]) + "." + to_string(variaSeg) + "." + to_string(variaTerc + 1) + ".0";
        } else if (variaQuar == 255 && variaTerc == 255) {
            ip1 = to_string(ip[0]) + "." + to_string(ip[1]) + "." + to_string(ip[2]) + ".1";
            ip2 = to_string(ip[0]) + "." + to_string(variaSeg) + ".255.255";
            ipBroad = to_string(ip[0]) + "." + to_string(variaSeg+1) + ".0.0";
        } else if (variaQuar > 255 && variaTerc < 255) {
            variaQuar = variaQuar-255;
            variaTerc = variaTerc + 1;
            ip1 = to_string(ip[0]) + "." + to_string(ip[1]) + "." + to_string(ip[2]) + ".1";
            ip2 = to_string(ip[0]) + "." + to_string(variaSeg) + "." + to_string(variaTerc) + "." + to_string(variaQuar);
            ipBroad = to_string(ip[0]) + "." + to_string(variaSeg) + "." + to_string(variaTerc) + "." + to_string(variaQuar+1);
        } else if (variaQuar < 255 && variaTerc > 255) {
            variaTerc=variaTerc-255;
            variaSeg=variaSeg+1;
            ip1 = to_string(ip[0]) + "." + to_string(ip[1]) + "." + to_string(ip[2]) + ".1";
            ip2 = to_string(ip[0]) + "." + to_string(variaSeg) + "." + to_string(variaTerc) + "." + to_string(variaQuar);
            ipBroad = to_string(ip[0]) + "." + to_string(variaSeg) + "." + to_string(variaTerc) + "." + to_string(variaQuar+1);
        } else if (variaQuar>255 && variaTerc>255) {  
            variaQuar = variaQuar - 255;
            variaTerc = (variaTerc + 1) - 255;
            variaSeg = variaSeg + 1;
            ip1 = to_string(ip[0]) + "." + to_string(ip[1]) + "." + to_string(ip[2]) + ".1";
            ip2 = to_string(ip[0]) + "." + to_string(variaSeg) + "." + to_string(variaTerc) + "." + to_string(variaQuar);
            ipBroad = to_string(ip[0]) + "." + to_string(variaSeg) + "." + to_string(variaTerc) + "." + to_string(variaQuar+1);
        }
    } */ // Codigo possui erros, não consegui ressolver
    
    // Divide a rede em sub-redes
    int subnetIndex = 1;
    string subnetIpRede = ipRede;
    string subnetIp1 = ip1;
    string subnetIp2 = ip2;
    string subnetIpBroad = ipBroad;
    
    
    //atualição dos ips
    for (int i = 0; i < numSubnets; i++) {
        Subnet subnet;
        subnet.name = "Subnet " + to_string(subnetIndex);
        subnet.ipRede = subnetIpRede;
        subnet.ip1 = subnetIp1;
        subnet.ip2 = subnetIp2;
        subnet.ipBroad = subnetIpBroad;
        subnet.subnetMask = to_string(bitsRede + bitsNeeded);
        subnet.numHosts = hostsPerSubnet;
            
        vector <int> ipDiv = dividirIP(subnetIpRede);
            
        subnets.push_back(subnet);

        // Atualiza o endereço da próxima sub-rede
        if (hostsPerSubnet<255) {
            int variaQuar0 = ipDiv[3] + hostsPerSubnet + 2;
            if (variaQuar0 < 255) {
                subnetIpRede = to_string(ipDiv[0]) + "." + to_string(ipDiv[1]) + "." + to_string(ipDiv[2]) + "." + to_string(variaQuar0);
                vector <int> ipDiv2 = dividirIP(subnetIpRede);
                int variaQuar00 = ipDiv2[3] + hostsPerSubnet;
                if (variaQuar00<255) {
                    subnetIp1 = to_string(ipDiv2[0]) + "." + to_string(ipDiv2[1]) + "." + to_string(ipDiv2[2]) + "." + to_string(ipDiv2[3] + 1);
                    subnetIp2 = to_string(ipDiv2[0]) + "." + to_string(ipDiv2[1]) + "." + to_string(ipDiv2[2]) + "." + to_string(variaQuar00);
                    subnetIpBroad = to_string(ipDiv2[0]) + "." + to_string(ipDiv2[1]) + "." + to_string(ipDiv2[2]) + "." + to_string(variaQuar00 + 1);
                } else {
                    variaQuar00 = variaQuar00-254;
                    int variaTerc00 = ipDiv2[2] + 1;
                    if (variaTerc00<255) {
                        subnetIp1 = to_string(ipDiv2[0]) + "." + to_string(ipDiv2[1]) + "." + to_string(ipDiv2[2]) + "." + to_string(ipDiv2[3] + 1);
                        subnetIp2 = to_string(ipDiv2[0]) + "." + to_string(ipDiv2[1]) + "." + to_string(variaTerc00) + "." + to_string(variaQuar00);
                        subnetIpBroad = to_string(ipDiv2[0]) + "." + to_string(ipDiv2[1]) + "." + to_string(variaTerc00) + "." + to_string(variaQuar00 + 1);
                    } else {
                        int variaSeg00 = ipDiv2[1]+1;
                        variaTerc00 = variaTerc00 - 255;
                        subnetIp1 = to_string(ipDiv2[0]) + "." + to_string(ipDiv2[1]) + "." + to_string(ipDiv2[2]) + "." + to_string(ipDiv2[3] + 1);
                        subnetIp2 = to_string(ipDiv2[0]) + "." + to_string(variaSeg00) + "." + to_string(variaTerc00) + "." + to_string(variaQuar00);
                        subnetIpBroad = to_string(ipDiv2[0]) + "." + to_string(variaSeg00) + "." + to_string(variaTerc00) + "." + to_string(variaQuar00 + 1);
                    }
                }
            } else {
                variaQuar0 = variaQuar0 - 254;
                int variaTerc0 = ipDiv[2] + 1;
                if (variaTerc0<255) {
                    subnetIpRede = to_string(ipDiv[0]) + "." + to_string(ipDiv[1]) + "." + to_string(variaTerc0) + "." + to_string(variaQuar0);
                    vector <int> ipDiv2 = dividirIP(subnetIpRede);
                    int variaQuar00 = ipDiv2[3] + hostsPerSubnet;
                    if (variaQuar00<255) {
                        subnetIp1 = to_string(ipDiv2[0]) + "." + to_string(ipDiv2[1]) + "." + to_string(ipDiv2[2]) + "." + to_string(ipDiv2[3] + 1);
                        subnetIp2 = to_string(ipDiv2[0]) + "." + to_string(ipDiv2[1]) + "." + to_string(variaTerc0) + "." + to_string(variaQuar00);
                        subnetIpBroad = to_string(ipDiv2[0]) + "." + to_string(ipDiv2[1]) + "." + to_string(variaTerc0) + "." + to_string(variaQuar00 + 1);
                    } else {
                        variaQuar00=variaQuar00-254;
                        int variaTerc00 = ipDiv2[2] + 1;
                        if (variaTerc00<255) {
                            subnetIp1 = to_string(ipDiv2[0]) + "." + to_string(ipDiv2[1]) + "." + to_string(ipDiv2[2]) + "." + to_string(ipDiv2[3] + 1);
                            subnetIp2 = to_string(ipDiv2[0]) + "." + to_string(ipDiv2[1]) + "." + to_string(variaTerc00) + "." + to_string(variaQuar00);
                            subnetIpBroad = to_string(ipDiv2[0]) + "." + to_string(ipDiv2[1]) + "." + to_string(variaTerc00) + "." + to_string(variaQuar00 + 1);
                        } else {
                            variaTerc00=variaTerc00-255;
                            int variaSeg00 = ipDiv2[1]+1;
                            subnetIp1 = to_string(ipDiv2[0]) + "." + to_string(ipDiv2[1]) + "." + to_string(ipDiv2[2]) + "." + to_string(ipDiv2[3] + 1);
                            subnetIp2 = to_string(ipDiv2[0]) + "." + to_string(variaSeg00) + "." + to_string(variaTerc00) + "." + to_string(variaQuar00);
                            subnetIpBroad = to_string(ipDiv2[0]) + "." + to_string(variaSeg00) + "." + to_string(variaTerc00) + "." + to_string(variaQuar00 + 1);
                        }
                    }
                }
            }
        subnetIndex++;
        } else if (hostsPerSubnet>= 255 && hostsPerSubnet < (255-ip[2])*(255-ip[3])) {
            int variaQuar1 = ipDiv[3]  + hostsPerSubnet%(255);
            int variaTerc1 = ipDiv[2] + hostsPerSubnet/255;
            if (variaTerc1<255) {
                if (variaQuar1<253) {
                    subnetIpRede = to_string(ipDiv[0]) + "." + to_string(ipDiv[1]) + "." + to_string(variaTerc1) + "." + to_string(variaQuar1+2);
                } else {
                    variaQuar1=variaQuar1-254;
                    subnetIpRede = to_string(ipDiv[0]) + "." + to_string(ipDiv[1]) + "." + to_string(variaTerc1+1) + "." + to_string(variaQuar1);
                }
            } else {
                int variaSeg1 = ipDiv[1] + 1;
                variaTerc1 = variaTerc1 - 254;
                variaQuar1 = ipDiv[3]  + hostsPerSubnet%(255);
                if (variaQuar1<253) {
                    subnetIpRede = to_string(ipDiv[0]) + "." + to_string(variaSeg1) + "." + to_string(variaTerc1) + "." + to_string(variaQuar1+2);
                } else {
                    variaTerc1=variaTerc1+1;
                    variaQuar1=variaQuar1-254;
                    subnetIpRede = to_string(ipDiv[0]) + "." + to_string(variaSeg1) + "." + to_string(variaTerc1) + "." + to_string(variaQuar1);
                }
            }
            vector <int> ipDiv2 = dividirIP(subnetIpRede);
            int variaQuar2 = ipDiv2[3]  + hostsPerSubnet%(255);
            int variaTerc2 = ipDiv2[2] + hostsPerSubnet/255;
            if (variaTerc2<254) {
                if (variaQuar2<253) {
                    subnetIp1 = to_string(ipDiv2[0]) + "." + to_string(ipDiv2[1]) + "." + to_string(ipDiv2[2]) + "." + to_string(ipDiv2[3]+1);
                    subnetIp2 = to_string(ipDiv2[0]) + "." + to_string(ipDiv2[1]) + "." + to_string(variaTerc2) + "." + to_string(variaQuar2+1);
                    subnetIpBroad = to_string(ipDiv2[0]) + "." + to_string(ipDiv2[1]) + "." + to_string(variaTerc2) + "." + to_string(variaQuar2+2);
                } else {
                    variaQuar2=variaQuar2-254;
                    variaTerc2=variaTerc2+1;
                    subnetIp1 = to_string(ipDiv2[0]) + "." + to_string(ipDiv2[1]) + "." + to_string(ipDiv2[2]) + "." + to_string(ipDiv2[3]+1);
                    subnetIp2 = to_string(ipDiv2[0]) + "." + to_string(ipDiv2[1]) + "." + to_string(variaTerc2) + "." + to_string(variaQuar2+1);
                    subnetIpBroad = to_string(ipDiv2[0]) + "." + to_string(ipDiv2[1]) + "." + to_string(variaTerc2) + "." + to_string(variaQuar2+2);
                } 
            } else {
                int variaSeg2 = ipDiv2[1] + 1;
                variaTerc2 = variaTerc2 - 254;
                variaQuar2 = ipDiv2[3]  + hostsPerSubnet%(255);
                if (variaQuar2<253) {
                    subnetIp1 = to_string(ipDiv2[0]) + "." + to_string(ipDiv2[1]) + "." + to_string(ipDiv2[2]) + "." + to_string(ipDiv2[3]+1);
                    subnetIp2 = to_string(ipDiv2[0]) + "." + to_string(variaSeg2) + "." + to_string(variaTerc2) + "." + to_string(variaQuar2+1);
                    subnetIpBroad = to_string(ipDiv2[0]) + "." + to_string(variaSeg2) + "." + to_string(variaTerc2) + "." + to_string(variaQuar2+2);
                } else {
                    variaQuar2 = variaQuar2 - 254;
                    variaTerc2 = variaTerc2 + 1;
                    subnetIp1 = to_string(ipDiv2[0]) + "." + to_string(ipDiv2[1]) + "." + to_string(ipDiv2[2]) + "." + to_string(ipDiv2[3]+1);
                    subnetIp2 = to_string(ipDiv2[0]) + "." + to_string(variaSeg2) + "." + to_string(variaTerc2) + "." + to_string(variaQuar2+1);
                    subnetIpBroad = to_string(ipDiv2[0]) + "." + to_string(variaSeg2) + "." + to_string(variaTerc2) + "." + to_string(variaQuar2+2);
                }
            }
        subnetIndex++;
        } else if (hostsPerSubnet > (255-ip[2])*(255-ip[3])) {
            /*int variaSeg1 = ipDiv[1] + hostsPerSubnet/(255*255);
            int variaQuar1 = ipDiv[3]  + (hostsPerSubnet%(255*255*(hostsPerSubnet/(255*255))));
            int variaTerc1 = ipDiv[2] + variaQuar1/255;
            if (variaTerc1<255) {
                if (variaQuar1<253) {
                    subnetIpRede = to_string(ipDiv[0]) + "." + to_string(variaSeg1) + "." + to_string(variaTerc1) + "." + to_string(variaQuar1+2);
                } else {
                    variaQuar1=variaQuar1-255;
                    subnetIpRede = to_string(ipDiv[0]) + "." + to_string(variaSeg1) + "." + to_string(variaTerc1+1) + "." + to_string(variaQuar1);
                }
            } else {
                int variaSeg1 = variaSeg1+1;
                variaTerc1 = variaTerc1 - 255;
                variaQuar1 = ipDiv[3]  + (hostsPerSubnet%(255*255*(hostsPerSubnet/(255*255))));
                if (variaQuar1<253) {
                    subnetIpRede = to_string(ipDiv[0]) + "." + to_string(variaSeg1) + "." + to_string(variaTerc1) + "." + to_string(variaQuar1+2);
                } else {
                    variaTerc1=variaTerc1+1;
                    variaQuar1=variaQuar1-255;
                    subnetIpRede = to_string(ipDiv[0]) + "." + to_string(variaSeg1) + "." + to_string(variaTerc1) + "." + to_string(variaQuar1);
                }
            }
            vector <int> ipDiv2 = dividirIP(subnetIpRede);
            int variaSeg2 = ipDiv2[1] + hostsPerSubnet/(255*255);
            int variaQuar2 = ipDiv2[3]  + (hostsPerSubnet%(255*255*(hostsPerSubnet/(255*255))));
            int variaTerc2 = ipDiv2[2] + variaQuar2/255;
            if (variaTerc2<255) {
                if (variaQuar2<253) {
                    subnetIp1 = to_string(ipDiv2[0]) + "." + to_string(ipDiv2[1]) + "." + to_string(ipDiv2[2]) + "." + to_string(ipDiv2[3]+1);
                    subnetIp2 = to_string(ipDiv2[0]) + "." + to_string(variaSeg2) + "." + to_string(variaTerc2) + "." + to_string(variaQuar2+1);
                    subnetIpBroad = to_string(ipDiv2[0]) + "." + to_string(variaSeg2) + "." + to_string(variaTerc2) + "." + to_string(variaQuar2+2);
                } else {
                    variaQuar2=variaQuar2-255;
                    variaTerc2=variaTerc2+1;
                    subnetIp1 = to_string(ipDiv2[0]) + "." + to_string(ipDiv2[1]) + "." + to_string(ipDiv2[2]) + "." + to_string(ipDiv2[3]+1);
                    subnetIp2 = to_string(ipDiv2[0]) + "." + to_string(variaSeg2) + "." + to_string(variaTerc2) + "." + to_string(variaQuar2+1);
                    subnetIpBroad = to_string(ipDiv2[0]) + "." + to_string(variaSeg2) + "." + to_string(variaTerc2) + "." + to_string(variaQuar2+2);
                } 
            } else {
                int variaSeg2 = variaSeg2+1;
                variaTerc2 = variaTerc2 - 255;
                variaQuar2 = ipDiv2[3]  + (hostsPerSubnet%(255*255*(hostsPerSubnet/(255*255))));
                if (variaQuar2<255) {
                    subnetIp1 = to_string(ipDiv2[0]) + "." + to_string(ipDiv2[1]) + "." + to_string(ipDiv2[2]) + "." + to_string(ipDiv2[3]+1);
                    subnetIp2 = to_string(ipDiv2[0]) + "." + to_string(variaSeg2) + "." + to_string(variaTerc2) + "." + to_string(variaQuar2+1);
                    subnetIpBroad = to_string(ipDiv2[0]) + "." + to_string(variaSeg2) + "." + to_string(variaTerc2) + "." + to_string(variaQuar2+2);
                } else {
                    variaQuar2 = variaQuar2 - 255;
                    variaTerc2 = variaTerc2 + 1;
                    subnetIp1 = to_string(ipDiv2[0]) + "." + to_string(ipDiv2[1]) + "." + to_string(ipDiv2[2]) + "." + to_string(ipDiv2[3]+1);
                    subnetIp2 = to_string(ipDiv2[0]) + "." + to_string(variaSeg2) + "." + to_string(variaTerc2) + "." + to_string(variaQuar2+1);
                    subnetIpBroad = to_string(ipDiv2[0]) + "." + to_string(variaSeg2) + "." + to_string(variaTerc2) + "." + to_string(variaQuar2+2);
                }
            } */ //Tentativa, porém com falhas que não consegui arrumar
            
        cout<<"Numero muito grande de host - Não consegui efetuar os calculos para esse tipo de rede, nesse caso"<<endl;
        }  
            

            
    }
        
        return subnets;
}


int main() {
    string ipRede;
    int bitsRede;
    int numSubnets;
    char classe;

    cout << "Digite o endereço de rede IPv4: ";
    cin >> ipRede;

    cout << "Digite o comprimento do prefixo de rede: ";
    cin >> bitsRede;

    cout << "Digite o número de sub-redes desejadas: ";
    cin >> numSubnets;

    classe = definirClasse (bitsRede);
    cout<<"A classe é: "<<classe<<endl;
    
    vector<Subnet> subnets = divideRedeC(ipRede, bitsRede, numSubnets);
    subnets = divideRedeB(ipRede, bitsRede, numSubnets);
    subnets = divideRedeA(ipRede, bitsRede, numSubnets);
    
    switch (classe) {
        case 'C': 
            cout << "\nSub-redes resultantes:\n";
            for (const auto& subnet : subnets) {
                cout << "Nome: " << subnet.name << endl;
                cout << "Endereço de Rede: " << subnet.ipRede << "/" << subnet.subnetMask << endl;
                cout << "Número de Hosts: " << subnet.numHosts << endl;
                cout << "Intervalo de endereço host: " << subnet.ip1 << " a " << subnet.ip2 << endl;
                cout << "Endereço de broadcast: " << subnet.ipBroad << endl;
                cout << endl;
            }
        break;
        
        case 'B':
            cout << "\nSub-redes resultantes:\n";
            for (const auto& subnet : subnets) {
                cout << "Nome: " << subnet.name << endl;
                cout << "Endereço de Rede: " << subnet.ipRede << "/" << subnet.subnetMask << endl;
                cout << "Número de Hosts: " << subnet.numHosts << endl;
                cout << "Intervalo de endereço host: " << subnet.ip1 << " a " << subnet.ip2 << endl;
                cout << "Endereço de broadcast: " << subnet.ipBroad << endl;
                cout << endl;
                
            }
        break;
        
        
        case 'A':
            cout << "\nSub-redes resultantes:\n";
            for (const auto& subnet : subnets) {
                cout << "Nome: " << subnet.name << endl;
                cout << "Endereço de Rede: " << subnet.ipRede << "/" << subnet.subnetMask << endl;
                cout << "Número de Hosts: " << subnet.numHosts << endl;
                cout << "Intervalo de endereço host: " << subnet.ip1 << " a " << subnet.ip2 << endl;
                cout << "Endereço de broadcast: " << subnet.ipBroad << endl;
                cout << endl;
            }
        break;
    }
}