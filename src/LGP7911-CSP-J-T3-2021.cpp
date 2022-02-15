#include <algorithm>
#include <cstring>
#include <iostream>
using namespace std;
int Pow(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    int ans = 1;
    for (int i = 0; i < b; i++)
    {
        ans *= a;
    }
    return ans;
}
bool IsIpLegitimate(string ip)
{
    int periodPos[25] = {0}, colonPos[25] = {0}, pPos = 0, cPos = 0;
    for (int i = 0; i < 25; i++)
    {

        if (ip[i] == '.')
        {
            periodPos[pPos] = i;
            pPos++;
        }

        if (ip[i] == ':')
        {
            colonPos[cPos] = i;
            cPos++;
        }
    }

    if ((pPos != 3) || (cPos != 1))
    {
        return 0;
    }

    if (colonPos[0] == ip.length() - 1)
    {
        return 0;
    }

    if (ip[0] == '0' && periodPos[0] > 1)
    {
        return 0;
    }

    for (int i = 0; i <= 2; i++)
    {
        if (ip[periodPos[i] + 1] == '0' && periodPos[i + 1] - periodPos[i] - 1 > 1)
        {
            return 0;
        }
        if (i == 0)
        {
            if (periodPos[i] == 0)
            {
                return 0;
            }
        }
        if (i != 0)
        {
            if (periodPos[i] - periodPos[i - 1] == 1)
            {
                return 0;
            }
        }
    }

    if (ip[colonPos[0] + 1] == '0' && ip.length() - 1 >= colonPos[0] + 2)
    {
        return 0;
    }

    int sum = 0, k = 0;
    for (int i = ip.length() - 1; i > colonPos[0]; i--)
    {
        sum += (ip[i] - '0') * Pow(10, k);
        k++;
    }

    if (sum < 0 || sum > 65535)
    {
        return 0;
    }
    for (int i = 0; i <= 3; i++)
    {

        if (i == 0)
        {
            k = 0;
            sum = 0;
            for (int j = periodPos[i] - 1; j >= 0; j--)
            {
                sum += (ip[j] - '0') * Pow(10, k);
                k++;
            }
        }
        if (i != 0 && i != 3)
        {
            k = 0;
            sum = 0;
            for (int j = periodPos[i] - 1; j > periodPos[i - 1]; j--)
            {
                sum += (ip[j] - '0') * Pow(10, k);
                k++;
            }
        }

        if (i == 3)
        {
            k = 0;
            sum = 0;
            for (int j = colonPos[0] - 1; j > periodPos[i - 1]; j--)
            {
                sum += (ip[j] - '0') * Pow(10, k);
                k++;
            }
        }

        if (sum < 0 || sum > 255)
        {
            return 0;
        }
    }
    return 1;
}
struct Server
{
    string ip;
    int number;
} server[1023];
int main()
{
    freopen("network4.in", "r", stdin);
    freopen("network4.out", "w", stdout);
    int operatingNumber, i, serverNumber = 1, j, ipJudge, ipMark; // TODO: Check Server Number
    bool isIpLegitimate;
    string command, tmpIp, clientIp;
    cin >> operatingNumber;

    for (i = 1; i <= operatingNumber; i++)
    {
        cin >> command;

        if (command == "Server")
        {
            server[i].number = serverNumber;
            cin >> tmpIp;
            isIpLegitimate = IsIpLegitimate(tmpIp);

            if (isIpLegitimate)
            {

                if (i == 1)
                {
                    server[i].ip = tmpIp;
                    // server[i].number = serverNumber;
                    // serverNumber++;
                    cout << "OK\n";
                }

                if (i > 1)
                {
                    ipJudge = 1;
                    for (j = 1; j <= i; j++)
                    {
                        if (server[j].ip == tmpIp)
                        {
                            ipJudge = 0;
                            break;
                        }
                    }

                    if (ipJudge)
                    {
                        server[i].ip = tmpIp;
                        // server[i].number = serverNumber;
                        // serverNumber++;
                        cout << "OK\n";
                    }

                    if (!ipJudge)
                    {
                        cout << "FAIL\n";
                    }
                }
            }
            if (!isIpLegitimate)
            {
                cout << "ERR\n";
            }
            serverNumber++;
        }

        if (command == "Client")
        {
            cin >> clientIp;
            isIpLegitimate = IsIpLegitimate(clientIp);

            if (!isIpLegitimate)
            {
                cout << "ERR\n";
            }

            if (isIpLegitimate)
            {
                ipJudge = 0;

                for (j = 1; j <= i; j++)
                {
                    if (clientIp == server[j].ip)
                    {
                        ipJudge = 1;
                        ipMark = j;
                        break;
                    }
                }

                if (ipJudge)
                {
                    cout << server[ipMark].number << endl;
                }

                if (!ipJudge)
                {
                    cout << "FAIL\n";
                }
            }
        }
    }
    fclose(stdin);
    fclose(stdout);
    system("pause");
    return 0;
}
