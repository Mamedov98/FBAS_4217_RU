

using RealGoodExample;

Employee<float> e1 = new()
{
    Name = "Elvin",
    Surname = "Azimov",
    Salary = 10000,
};

Employee<float>.TaxDelegate = TaxService.CountTax;

Console.WriteLine(e1.Salary);

//Console.WriteLine(e1.Salary - e1.TaxDelegate(e1.Salary, 12, 75));


//Console.WriteLine(e1.Salary);

//e1.TaxDelegate(1);
//e1.TaxDelegate?.Invoke(1);

