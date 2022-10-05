
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

    interface IInterface
    {
        public void Move()
        {
            Console.WriteLine("aaaa moves");
        }
    }

    class Car : IMoveable
    {
       
    }


    class Plane : IMoveable, IInterface
    {
        void IMoveable.Move()
        {
            Console.WriteLine("IMoveable Plane moves");
        }
        
        void IInterface.Move()
        {
            Console.WriteLine("IInterface Plane moves");
        }
    }
    // IInterface a = new Plane();
    // a.Move();

    #endregion
}




