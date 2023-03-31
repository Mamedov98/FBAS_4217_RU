using Ecommerce.Message;
using GalaSoft.MvvmLight;
using UserEcommerceApp.Message;

namespace Ecommerce.Services.Interfaces
{ 
    public interface INavigationService
    {
        public void NavigateTo<T>(ParameterMessage message = null) where T : ViewModelBase; 
    }
}
