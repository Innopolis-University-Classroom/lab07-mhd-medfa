
//change the below code
// the function below now only works with integers, change it to work with any type
// also fill out the body
// void multiples (int& sum, int x, int n)
// {

// }
#include <iostream>
template <class WhatKind>
void multiples (WhatKind& sum, WhatKind x, int n)
{
    int i;
    WhatKind term = (WhatKind) 0;
    sum = (WhatKind) 1;
    for (i=1; i<=n; i++)
    {
    term = term + x;
    sum = sum + term;
    }
}


