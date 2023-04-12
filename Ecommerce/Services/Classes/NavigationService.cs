using Ecommerce.Message;
using Ecommerce.Services.Interfaces;
using GalaSoft.MvvmLight;
using GalaSoft.MvvmLight.Messaging;
using System.Windows.Markup;
using UserEcommerceApp.Message;
namespace Ecommerce.Services.Classes
{

    internal class NavigationService : INavigationService
    {
        private readonly IMessenger _messenger;
        public NavigationService(IMessenger messenger)
        {
            _messenger = messenger;
        }

        public void NavigateTo<T>(ParameterMessage? message = null) where T : ViewModelBase
        {
            if (message != null)
            {
                _messenger.Send(message);
            }
            _messenger.Send(new NavigationMessage() { ViewModelType = typeof(T) });
        }

        public void SendData<T>(T? data) where T : class
        {
            if (data != null)
            {
                _messenger.Send(new DataMessage()
                {
                    Data = data
                });


            };
        }
    }
}
