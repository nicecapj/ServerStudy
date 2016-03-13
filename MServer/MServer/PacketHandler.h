#pragma once

class PacketBUffer;

class PACKET
{
    bool operator()(Session& session, const PacketBuffer& packet) {}
};

class PACKET_NO_0 : public PACKET
{
    bool operator()(Session& session, const PacketBuffer& packet);
};

class PACKET_NO_1 : public PACKET
{
    bool operator()(Session& session, const PacketBuffer& packet);

};
class PacketHandler : public Singleton<PacketHandler>
{
public:
    PacketHandler();
    ~PacketHandler();

    void InitPacketFunctor();

    bool HandlePacket(Session* pSession, const PacketBuffer& packet);

    PACKET* packetFunctor[MAX_NO];
};

