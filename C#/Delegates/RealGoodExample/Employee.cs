namespace RealGoodExample;

public class Employee<T>
{
    public static readonly float ITSDA = 12;
    public static readonly float DSMF = 12;

    public delegate float SalaryAction<T>(float n1);
    public static SalaryAction<float> TaxDelegate { get; set; }

    public event SalaryAction<T> SalaryHandler;

    public Employee()
    {
        SalaryHandler = OnSalaryHandler;
    }

    private float OnSalaryHandler(float n1)
    {
        float result = 0;
        result += TaxDelegate(n1);
        return salary - (salary * 5 / 100 + result);
    }

    public string Name { get; set; }
    public string Surname { get; set; }

    private float salary;
    public float Salary
    {
        get
        {
            return SalaryHandler.Invoke(ITSDA + DSMF);
        }
        set => salary = value;
    }
}