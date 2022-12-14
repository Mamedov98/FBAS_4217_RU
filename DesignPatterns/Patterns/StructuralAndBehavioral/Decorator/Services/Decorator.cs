using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Decorator.Services
{
    internal abstract class Decorator : NavigationService
    {
        private NavigationService? _navigationService;

        public Decorator(NavigationService? navigationService)
        {
            _navigationService = navigationService;
        }

        public void SetService(NavigationService? navigationService)
        {
            _navigationService = navigationService;
        }

        public override void NavigateTo()
        {
            if (_navigationService != null)
            {
                _navigationService.NavigateTo();
            }
            else
            {
                _navigationService = new BaseNavigationService();
            }
        }

        public abstract void Navigate(string name);
    }
}
