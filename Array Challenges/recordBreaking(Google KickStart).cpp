#include <iostream>
using namespace std;

int main(int argc, const char **argv)
{
    int t;
    cin >> t;

    int results[t];

    for (int i = 0; i < t; i++)
    {
        int N;
        cin >> N;
        int visitorsOfDays[N];
        for (int j = 0; j < N; j++)
        {
            cin >> visitorsOfDays[j];
        }

        int recordBreakingDays = 0;

        for (int day = 0; day < N; day++)
        {
            if ((day == 0 && visitorsOfDays[day] > visitorsOfDays[day + 1]) || (day == (N - 1) && visitorsOfDays[day] > visitorsOfDays[day - 1]) || N == 1)
            {
                recordBreakingDays++;
            }
            else if (visitorsOfDays[day] > visitorsOfDays[day + 1] && visitorsOfDays[day] > visitorsOfDays[day - 1])
            {
                recordBreakingDays++;
            }
        }

        results[i] = recordBreakingDays;
    }

    for (int i = 0; i < t; i++)
    {
        cout << "Case# " << (i + 1) << ": " << results[i] << endl;
    }

    return 0;
}