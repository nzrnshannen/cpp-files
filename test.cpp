#include<iostream>
using namespace std;

bool isAnagram(string input1, string input2);

int main()
{
    string str1, str2;
    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;

    cout << "Result = " << isAnagram(str1, str2); 


}

// bool isAnagram(string input1, string input2)
// {
//     bool check = true;

//     for(int i=0; i< (int)input1.length() && check; i++)
//     {
//         if(input1[i] == input2[0] && input2[i+1] == input2[1])
//         {
//             int j;
//             for(j=0; j<(int)input2.length() && input2[j] == input1[i]; j++, i++){}

//             check = (j< (int)input2.length()) ? true : false;
//         }
//     }

//     return check;
// }

bool isAnagram(string input1, string input2)
{
    bool check = true;
    bool checkArr[input1.length()] = {false};
    ;
    for(int i=0; i<(int)input2.length() && check; i++)
    {
        check = false;  
        for(int j=0; j<(int)input1.length() && !check; j++)
        {
            if(input2[i] == input2[j])
            {
                checkArr[j] = true;
            }
        }
    }
    return check;
}