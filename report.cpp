#include <iostream>
#include <sstream>

class ReportDataProcessor {
public:
    std::string title;
    std::string data;

    ReportDataProcessor(const std::string& t, const std::string& d) : title(t), data(d) {}

    int processData() {
        std::istringstream iss(data);
        int number, sum = 0;
        while (iss >> number) {
            sum += number;
        }
        return sum;
    }


};

class ReportPrinter : public ReportDataProcessor {
public:
    std::string format() {
        return "<h1>" + title + "</h1>\n<p>" + title + ": " + std::to_string(processData()) + "</p>";
    }

    ReportPrinter(const std::string& t, const std::string& d) : ReportDataProcessor(t, d) {}
    void print() {
        std::cout << format();
    }
};

// Included for demonstration
int main() {
    ReportDataProcessor report("Total sales", "51 42 39 60");
    ReportPrinter printer(report.title, report.data);
    printer.print();
}
