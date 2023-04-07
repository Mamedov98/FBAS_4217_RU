using Ecommerce.Model;
using System;
namespace Ecommerce.Message;
public class NavigationMessage
{
    public Type? ViewModelType { get; set; }
    internal EcommerceContext.Sneaker Parameter { get; set; }
}