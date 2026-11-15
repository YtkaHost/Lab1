#include "pch.h"

//Test 

using namespace System;
using namespace System::Text;

int main(array<System::String^>^ args)
{
    Console::OutputEncoding = Encoding::Unicode;

    // Ïåðøå çàâäàííÿ
    {
        int N = 5;

        double L = N + 10;
        double W = N + 5;
        double C = N;

        double area = L * W;
        double price = area * C;

        Console::WriteLine("Ðîçì³ð ê³ìíàòè: {0} ìåòð³â íà {1} ìåòð³â", L, W);
        Console::WriteLine("Ïëîùà ê³ìíàòè: {0} êâàäðàòíèõ ìåòð³â", area);
        Console::WriteLine("Ö³íà êèëèìîâîãî ïîêðèòòÿ: ${0}", price);
    }

    Console::WriteLine("----------------------------------------");

    // Äðóãå çàâäàííÿ
    {
        Console::Write("Ââåä³òü ïåðøèé ðÿäîê: ");
        String^ s1 = Console::ReadLine();

        Console::Write("Ââåä³òü äðóãèé ðÿäîê: ");
        String^ s2 = Console::ReadLine();

        String^ result = String::Concat(s1, s2);

        Console::WriteLine("Îá'ºäíàíèé ðÿäîê: {0}", result);
    }

    Console::WriteLine("----------------------------------------");

    // Òðåòº çàâäàííÿ
    {
        Console::Write("Ââåä³òü ïåðøèé ðÿäîê: ");
        String^ s1 = Console::ReadLine();

        Console::Write("Ââåä³òü äðóãèé ðÿäîê: ");
        String^ s2 = Console::ReadLine();

        int res = String::Compare(s1, s2);

        if (res < 0)
            Console::WriteLine("Ïåðøèé ðÿäîê ìåíøèé çà äðóãèé");
        else if (res > 0)
            Console::WriteLine("Ïåðøèé ðÿäîê á³ëüøèé çà äðóãèé");
        else
            Console::WriteLine("Ðÿäêè ð³âí³");
    }

    Console::WriteLine("----------------------------------------");

    // ×åòâåðòå çàâäàííÿ
    {
        Console::Write("Ââåä³òü ðÿäîê: ");
        String^ s = Console::ReadLine();

        String^ result = "begin" + s + "end";

        Console::WriteLine("Íîâèé ðÿäîê: {0}", result);
        Console::WriteLine("Äîâæèíà íîâîãî ðÿäêà: {0}", result->Length);
    }

    Console::WriteLine("----------------------------------------");

    // Ï'ÿòå çàâäàííÿ
    {
        Console::Write("Ââåä³òü ðÿäîê: ");
        String^ s = Console::ReadLine();

        array<Char>^ chars = s->ToCharArray();

        Array::Reverse(chars);

        String^ reversed = gcnew String(chars);

        Console::WriteLine("Ðåâåðñîâàíèé ðÿäîê: {0}", reversed);
    }

    Console::WriteLine("----------------------------------------");

    // Øîñòå çàâäàííÿ
    {
        Console::Write("Ââåä³òü ïåðøèé ðÿäîê (ñëîâà ÷åðåç ïðîá³ë): ");
        String^ s1 = Console::ReadLine();

        Console::Write("Ââåä³òü äðóãèé ðÿäîê (ñëîâà ÷åðåç ïðîá³ë): ");
        String^ s2 = Console::ReadLine();

        if (s1->Length > s2->Length)
            Console::WriteLine("Ïåðøèé ðÿäîê äîâøèé");
        else if (s1->Length < s2->Length)
            Console::WriteLine("Äðóãèé ðÿäîê äîâøèé");
        else
            Console::WriteLine("Ðÿäêè îäíàêîâî¿ äîâæèíè");
    }

    return 0;
}
