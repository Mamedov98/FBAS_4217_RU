namespace Interfaces
{
    #region Abstract



    //abstract class Transport
    //{
    //    public string Make { get; set; }
    //    public string Model { get; set; }
    //    public DateTime Year { get; set; }

    //    public void Move()
    //    {
    //        Console.WriteLine($"{Make} moves");
    //    }
    //}

    //class Car : Transport
    //{

    //}
    #endregion

    // robotsMAD25
    #region Interface

    //interface IMoveable
    //{
    //    public int Id { get; set; }
    //    public void Move();
    //}

    //interface ILiveable
    //{
    //    public uint Square { get; set; }
    //}

    //class Car : IMoveable, ILiveable
    //{
    //    public int Id { get; set; }
    //    public void Move()
    //    {
    //        Console.WriteLine($"{Make.ToString()} moves");
    //    }

    //    public string Make { get; set; }
    //    public uint Square { get; set; }
    //}

    #endregion

    #region Interface2

    interface IMoveable
    {
        public void Move()
        {
            Console.WriteLine("Transport moves");
        }
    }

    interface ITestable
    {
        public void Move()
        {
            Console.WriteLine("Test moves");
        }
    }

    class Car : IMoveable, ITestable
    {
    }



    class Plane : IMoveable
    {
        public string Make { get; set; }
        public void Move()
        {
            Console.WriteLine($"{Make} flies");
        }
    }

    #endregion
}

