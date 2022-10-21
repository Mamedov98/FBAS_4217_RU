using System;
using System.Collections.Generic;
using System.Configuration;
using System.Data;
using System.Linq;
using System.Threading.Tasks;
using System.Windows;
using MusicAppMVVM.View;
using MusicAppMVVM.ViewModel;
using SimpleInjector;

namespace MusicAppMVVM
{
    public partial class App : Application
    {
        public static Container? Container { get; set; }

        protected override void OnStartup(StartupEventArgs e)
        {
            Register();
            MainStartup();
            base.OnStartup(e);
        }


        private void Register()
        {
            Container = new();

            Container.RegisterSingleton<SearchViewModel>();
            Container.RegisterSingleton<MainViewModel>();

            Container.Verify();
        }

        private void MainStartup()
        {
            Window mainView = new MainView();

            mainView.DataContext = Container.GetInstance<MainViewModel>();

            mainView.ShowDialog();
        }
    }
}
