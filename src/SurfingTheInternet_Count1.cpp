#include <iostream>
#include <string>
#include <vector>
int main(int argc, char **argv)
{
    using namespace std;
    struct User
    {
        string username;
        vector<string> website;
    };
    vector<User> user;
    int users, websites;
    cin >> users >> websites;
    string username, website;
    for (int i = 0; i < websites; i++)
    {
        cin >> username >> website;
        bool flag = false;
        for (int j = 0; j < username.size(); j++)
        {
            if (user[j].username == username)
            {
                user[j].website.push_back(website);
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            User newUser;
            newUser.username = username;
            newUser.website.push_back(website);
            user.push_back(newUser);
        }
    }
    for (int i = 0; i < user.size(); i++)
    {
        cout << user[i].username;
        for (int j = 0; j < user[j].website.size(); j++)
        {
            cout << " " << user[i].website[j];
        }
        cout << endl;
    }
    cout << "请按任意键继续...";
    cin.clear();
    cin.sync();
    cin.get();
    return 0;
}
