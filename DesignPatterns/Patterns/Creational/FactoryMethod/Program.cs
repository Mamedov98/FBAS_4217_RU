#region Part1
//interface ISerializationService
//{
//    string Serialize(object? obj);
//}

//class JsonSerialize : ISerializationService
//{
//    public string Serialize(object? obj)
//    {
//        return "Serialize from JsonSerialize";
//    }
//}

//class XmlSerialize : ISerializationService
//{
//    public string Serialize(object? obj)
//    {
//        return "Serialize from XmlSerialize";
//    }
//}

#endregion


#region Part2 
interface IDeserializeService
{
    public IDeserializable Deserialize(object? data);
}

interface IDeserializable
{
}

class JsonSerialize :  IDeserializeService
{
    public IDeserializable Deserialize(object? data)
    {
        return new Animal();
    }
}

class XmlSerialize :  IDeserializeService
{
    public IDeserializable Deserialize(object? data)
    {
        return new Animal();
    }
}
class Animal : IDeserializable { }




#endregion