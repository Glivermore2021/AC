// fake_enet.h
typedef int ENetHost;
typedef int ENetAddress;
typedef int ENetPeer;
#define enet_initialize() 0
#define enet_deinitialize()
#define enet_host_create(...) 0
#define enet_host_destroy(host)
#define enet_address_set_host(address, name)
#define enet_address_set_port(address, port)
#define enet_host_connect(host, address, channels, data) 0
#define enet_host_service(host, event, timeout) 0
