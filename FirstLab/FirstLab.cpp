#include "pch.h"

using namespace System;
using namespace System::Text;

int main(array<System::String^>^ args)
{
    Console::OutputEncoding = Encoding::Unicode;

    // Перше завдання
    {
        int N = 5;

        double L = N + 10;
        double W = N + 5;
        double C = N;

        double area = L * W;
        double price = area * C;

        Console::WriteLine("Розмір кімнати: {0} метрів на {1} метрів", L, W);
        Console::WriteLine("Площа кімнати: {0} квадратних метрів", area);
        Console::WriteLine("Ціна килимового покриття: ${0}", price);
    }

    Console::WriteLine("----------------------------------------");

    // Друге завдання
    {
        Console::Write("Введіть перший рядок: ");
        String^ s1 = Console::ReadLine();

        Console::Write("Введіть другий рядок: ");
        String^ s2 = Console::ReadLine();

        String^ result = String::Concat(s1, s2);

        Console::WriteLine("Об'єднаний рядок: {0}", result);
    }

    Console::WriteLine("----------------------------------------");

    // Третє завдання
    {
        Console::Write("Введіть перший рядок: ");
        String^ s1 = Console::ReadLine();

        Console::Write("Введіть другий рядок: ");
        String^ s2 = Console::ReadLine();

        int res = String::Compare(s1, s2);

        if (res < 0)
            Console::WriteLine("Перший рядок менший за другий");
        else if (res > 0)
            Console::WriteLine("Перший рядок більший за другий");
        else
            Console::WriteLine("Рядки рівні");
    }

    Console::WriteLine("----------------------------------------");

    // Четверте завдання
    {
        Console::Write("Введіть рядок: ");
        String^ s = Console::ReadLine();

        String^ result = "begin" + s + "end";

        Console::WriteLine("Новий рядок: {0}", result);
        Console::WriteLine("Довжина нового рядка: {0}", result->Length);
    }

    Console::WriteLine("----------------------------------------");

    // П'яте завдання
    {
        Console::Write("Введіть рядок: ");
        String^ s = Console::ReadLine();

        array<Char>^ chars = s->ToCharArray();

        Array::Reverse(chars);

        String^ reversed = gcnew String(chars);

        Console::WriteLine("Реверсований рядок: {0}", reversed);
    }

    Console::WriteLine("----------------------------------------");

    // Шосте завдання
    {
        Console::Write("Введіть перший рядок (слова через пробіл): ");
        String^ s1 = Console::ReadLine();

        Console::Write("Введіть другий рядок (слова через пробіл): ");
        String^ s2 = Console::ReadLine();

        if (s1->Length > s2->Length)
            Console::WriteLine("Перший рядок довший");
        else if (s1->Length < s2->Length)
            Console::WriteLine("Другий рядок довший");
        else
            Console::WriteLine("Рядки однакової довжини");
    }

    return 0;
}