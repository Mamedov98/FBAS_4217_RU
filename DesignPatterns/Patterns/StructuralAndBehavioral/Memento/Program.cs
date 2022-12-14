class Weather : ISaveable
{
    public string? City { get; set; }
    public double Temp { get; set; }
}

class Memento : IMemento
{
    public ISaveable? SaveableObj { get; set; }
    public DateTime SnapDate { get; set; }

    public Memento()
    {
        SnapDate = DateTime.Now;
    }
}

interface IMemento
{
    public ISaveable? SaveableObj { get; set; }
    public DateTime SnapDate { get; set; }

}

class MementoManager
{
    public List<IMemento>? Snapshots { get; set; }

    public void AddSnapshot(IMemento? memento)
    {

        Snapshots.Add(memento);
    }

    public void ShowSnapshots()
    {
        throw new NotImplementedException();
    }

    public void DeleteSnaphot()
    {
           throw new NotImplementedException();
    }



}
interface ISaveable
{

}