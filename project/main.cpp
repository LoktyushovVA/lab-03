#include <iostream>
#include <vector>
#include "histogram.h"
using namespace std;

const vector<double> input_numbers(size_t count)
{
    vector<double> result(count);
    for (size_t i = 0; i < count; i++) {
    for (size_t i = 0; i < count; i++)
    {
        cin >> result[i];
    }
    return result;
}
}

const vector<size_t> make_histogram(const vector<double>& numbers, size_t& bin_count)
{
    vector<size_t> bins(bin_count);
    double min, max;
    min = max = numbers[0];
    find_minmax(numbers, min, max);
    for (double number : numbers)
    {
        size_t bin = (size_t)((number - min) / (max - min) * bin_count);
        if (bin == bin_count)
        {
            bin--;
        }
        bins[bin]++;
    }
    return bins;
}



int
main()
{

    cerr << "Enter number count: ";

 {
    const auto bins = make_histogram(numbers, bin_count);

    show_histogram_text(bins);
    show_histogram_svg(bins);

    return 0;
}
