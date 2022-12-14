using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Decorator.Services
{
    internal class FirstDecoratedService : Decorator
    {
        public FirstDecoratedService(NavigationService? navigationService) : base(navigationService)
        {
        }

        public override void Navigate(string name)
        {
            Console.WriteLine($"Navigate to {name}");
            base.NavigateTo();
        }

        public override void NavigateTo()
        {
            Console.WriteLine("Navigate from first decorator");
            base.NavigateTo();
        }
    }
}
