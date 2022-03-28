#include <bits/stdc++.h>
using namespace std;

bool check(long long arr[], int n)
{
    for (int i = 1; i <= n; i++)
        if (arr[i] >= 0)
            return true;
    return false;
}

long long doancon(long long n, long long b[])
{
    long long best = INT_MIN, ans = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        best = max(b[i], best + b[i]);
        ans = max(ans, best);
    }
    return ans;
}
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, a[100005], ans = 0, res = 0;
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        res = doancon(n, a);
        if (!check(a, n))
            cout << *max_element(a + 1, a + n + 1) << " ";
        else
        {
            for (int i = 1; i <= n; i++)
            {
                if (a[i] > 0)
                    ans += a[i];
            }
            cout << ans << " ";
        }
        cout << res << '\n';
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// bool check(int arr[], int n)
// {
//     for (int i = 1; i <= n; i++)
//         if (arr[i] >= 0)
//             return true;
//     return false;
// }
// long long subseq(int arr[], int n)
// {
//     if (check(arr, n))
//     {
//         long long ans = 0;
//         for (int i = 1; i <= n; i++)
//             if (arr[i] > 0)
//                 ans += arr[i];
//         return ans;
//     }
//     else
//         return *max_element(arr + 1, arr + n + 1);
// }

// long long kadane(int arr[], int n)
// {
//     long long max_so_far = INT_MIN, max_ending_here = 0;

//     for (int i = 1; i <= n; i++)
//     {
//         max_ending_here = max_ending_here + arr[i];
//         if (max_so_far < max_ending_here)
//             max_so_far = max_ending_here;

//         if (max_ending_here < 0)
//             max_ending_here = 0;
//     }
//     return max_so_far;
// }

// int main()
// {
//     int t;
//     cin >> t;
//     for (int q = 0; q < t; q++)
//     {
//         int n, arr[100005];
//         cin >> n;
//         for (int i = 1; i <= n; i++)
//             cin >> arr[i];
//         cout << subseq(arr, n) << " " << kadane(arr, n) << '\n';
//     }
// }