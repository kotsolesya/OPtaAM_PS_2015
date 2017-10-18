using System;
using System.IO;
using System.Collections.Generic;
using System.Linq;

namespace Практична__8
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Title = "Task #3";

            string path1 = GetPath();
            string[] arr1 = File.ReadAllLines(path1);
            try
            {
                File.WriteAllLines("Положительные числа.txt", SortPlus(arr1));
                File.WriteAllLines("Отрицательные числа.txt", SortMinus(arr1));
                File.WriteAllLines("Файл без дубликатов.txt", Duplicate(arr1));
                File.WriteAllLines("Парные числа.txt", SortPaired(arr1));
                File.WriteAllLines("Простые числа.txt", SortPrimes(arr1));
                Console.WriteLine("Сортирока завершена, резултаты сохранены в папке с программой!");
            }
            catch(Exception ex)
            { Console.WriteLine(ex.Message); }

            Console.ReadKey();
        }

        static List<string> SortPlus(string[] arr)
        {
            List<string> sorted = new List<string>();

            for (int i = 0; i < arr.Length; i++)
            {
                if (Convert.ToInt32(arr[i]) >= 0)
                    sorted.Add(arr[i]);
            }
            return sorted;
        }

        static List<string> SortMinus(string[] arr)
        {
            List<string> sorted = new List<string>();

            for (int i = 0; i < arr.Length; i++)
            {
                if (Convert.ToInt32(arr[i]) < 0)
                    sorted.Add(arr[i]);
            }
            return sorted;
        }

        static IEnumerable<string> Duplicate(string[] arr)
        {
            List<string> sorted = new List<string>();
            for (int i = 0; i < arr.Length; i++)
            {
                sorted.Add(arr[i]);
            }
            IEnumerable<string> sorted1 = sorted.Distinct();
            return sorted1;
        }

        static List<string> SortPaired(string[] arr)
        {
            List<string> sorted = new List<string>();

            for (int i = 0; i < arr.Length; i++)
            {
                if (Convert.ToInt32(arr[i]) % 2 == 0)
                    sorted.Add(arr[i]);
            }
            return sorted;
        }

        static List<string> SortPrimes(string[] arr)
        {
            List<string> sorted = new List<string>();
            for (int i = 0; i < arr.Length; i++)
            {
                    if (isPrime(Convert.ToInt32(arr[i])))
                        sorted.Add(arr[i]);
            }
            return sorted;
        }

        static bool isPrime(int number)
        {
            if (number < 2) return false;
            for (int i = 2; i <= Math.Sqrt(number); i++)
            {
                if (number % i == 0) return false;
            }
            return true;
        }
        static string GetPath()
        {
            Console.Write("Введите путь к файлу: ");
            string path = Console.ReadLine();
            while (!File.Exists(path))
            {
                Console.Write("Такого файла не существует!\n");
                Console.Write("Введите путь к файлу: ");
                path = Console.ReadLine();
            }
            return path;
        }
    }
}
