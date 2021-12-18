// Convert following: 
//   1) binary to decimal
//   2) octal to decimal
//   3) hexadecimal to decimal
//   4) decimal to binary
//   5) decimal to octal
//   6) decimal to hexadecimal

#include <bits/stdc++.h>
using namespace std;

int bin_to_dec(int n)
{
    int ans = 0, x = 1;
    while (n > 0)
    {
        int d = n % 10;
        ans += d * x;
        x *= 2;
        n /= 10;
    }
    return ans;
}

int octal_to_dec(int n)
{
    int ans = 0, x = 1;
    while (n > 0)
    {
        int d = n % 10;
        ans += d * x;
        x *= 8;
        n /= 10;
    }
    return ans;
}

int hexdec_to_dec(string s)
{
    int ans = 0, x = 1;
    int len = s.length();

    for (int i = len - 1; i >= 0; i--)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            ans += (s[i] - '0') * x;
        }
        else if (s[i] >= 'A' && s[i] <= 'F')
        {
            ans += (s[i] - 'A' + 10) * x;
        }
        x *= 16;
    }
    return ans;
}

int dec_to_bin(int n)
{
    vector<int> v;
    int res = 0;
    while (n > 0)
    {
        v.push_back(n % 2);
        n /= 2;
    }
    for (int i = v.size() - 1; i >= 0; i--)
    {
        res = res * 10 + v[i];
    }
    return res;
}

int dec_to_octal(int n)
{
    vector<int> v;
    long long int res = 0;
    while (n > 0)
    {
        v.push_back(n % 8);
        n /= 8;
    }
    for (int i = v.size() - 1; i >= 0; i--)
    {
        res = res * 10 + v[i];
    }
    return res;
}

string dec_to_hexdec(int n)
{
    vector<char> res;
    string v = "";
    while (n > 0)
    {
        if (n % 16 < 10)
        {
            res.push_back(n % 16 + 48);
        }
        else if (n % 16 > 9)
        {
            res.push_back(n % 16 + 55);
        }
        n /= 16;
    }

    for (int i = res.size() - 1; i >= 0; i--)
    {
        v += res[i];
    }
    return v;
}

int main()
{

    /*int bin;
    cin >> bin;
    cout << "Decimal of given binary number " << bin << " is " << bin_to_dec(bin) << endl;

    int oct;
    cin >> oct;
    cout << "Decimal of given octal number " << oct << " is " << octal_to_dec(oct) << endl;

    string hexadec;
    cin >> hexadec;
    cout << "Decimal of given hexaDecimal number " << hexadec << " is " << hexdec_to_dec(hexadec) << endl;

    int dec1;
    cin >> dec1;
    cout << "Binary of given decimal number " << dec1 << " is " << dec_to_bin(dec1) << endl;

    int dec2;
    cin >> dec2;
    cout << "Octal of given decimal number " << dec2 << " is " << dec_to_octal(dec2) << endl;*/

    int dec3;
    cin >> dec3;
    cout << "HexaDecimal of given decimal number " << dec3 << " is " << dec_to_hexdec(dec3) << endl;

    return 0;

}