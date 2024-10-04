
#include <iostream>
#include <string>

int main()
{
    const char ch[] = "dfk34klgjljlk43klgjklje4lkrtjkl4";
    int cnt;

    cnt = 0; 
    for (char c : ch)
    {
        if ((c >= '0') && (c <= '9'))
            cnt++;
    }
    std::cout << "count is " << cnt << std::endl;
    return 0;
    
    // This is for second commit

}

