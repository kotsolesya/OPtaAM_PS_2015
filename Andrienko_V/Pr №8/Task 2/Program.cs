using System;
using System.IO;
namespace Практична__8
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Title = "Task #2";

            string path1 = GetPath();
            string path2 = GetPath();

            string str1 = File.ReadAllText(path1);
            string str2 = File.ReadAllText(path2);

            File.WriteAllText(path1, str2);
            File.WriteAllText(path2, str1);

            Console.WriteLine("Содержимое файла " + path1 + " перенесено в файл " + path2 +  " , а содержимое файла " + path2 + " в файл " + path1);

            Console.ReadKey();
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
