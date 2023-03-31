using Ecommerce.Services.Interfaces;
using Ecommerce.Services.Classes;
using Ecommerce.View;
using Ecommerce.ViewModel;
using GalaSoft.MvvmLight.Messaging;
using SimpleInjector;
using System.Windows;

namespace Ecommerce
{
    /// <summary>
    /// Interaction logic for App.xaml
    /// </summary>
    public partial class App : Application
    {
        public static Container? Container { get; internal set; }
        protected override void OnStartup(StartupEventArgs e)
        {
            Register();

            MainStartup();

            base.OnStartup(e);
        }

        private void Register()
        {
            Container = new();

            Container.RegisterSingleton<IMessenger, Messenger>();
            Container.RegisterSingleton<INavigationService, NavigationService>();

            Container.RegisterSingleton<MainViewModel>(); 

            Container.Verify();
        }

        private void MainStartup()
        {
            Window mainView = new MainView();

            mainView.DataContext = Container?.GetInstance<MainViewModel>();

            mainView.ShowDialog();
        }
    }
}
