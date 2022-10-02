#include <iostream>
#include <list>
using namespace std;

struct YoutubeChannel
{
    string Name;
    int SubCount;

    YoutubeChannel(string name, int subCount)
    {
        Name = name;
        SubCount = subCount;
    }

    bool operator==(const YoutubeChannel &channel) const
    {
        return this->Name == channel.Name;
    }
};
ostream &operator<<(ostream &COUT, YoutubeChannel &ytChannel)
{
    COUT << "Name: " << ytChannel.Name << endl;
    COUT << "Subs: " << ytChannel.SubCount << endl;
    return COUT;
}

struct MyCollection
{
    list<YoutubeChannel> myChannels;

    void operator+=(YoutubeChannel &channel)
    {
        this->myChannels.push_back(channel);
    }
    void operator-=(YoutubeChannel &channel)
    {
        this->myChannels.remove(channel);
    }
};

ostream &operator<<(ostream &COUT, MyCollection &myCollection)
{
    for (YoutubeChannel ytChannel : myCollection.myChannels)
        COUT << ytChannel << endl;

    return COUT;
}

int main()
{
    YoutubeChannel yt1 = YoutubeChannel("Code Beauty", 75000);
    YoutubeChannel yt2 = YoutubeChannel("Second Channel", 80000);
    MyCollection myCollection;
    myCollection += yt1;
    myCollection += yt2;
    myCollection -= yt2;

    cout << myCollection;

    cin.get();
}
