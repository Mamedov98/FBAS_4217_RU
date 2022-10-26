using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using GalaSoft.MvvmLight;

namespace MusicAppMVVM.ViewModel
{
    public class MainViewModel : ViewModelBase
    {
        private ViewModelBase currentViewModel;
        public ViewModelBase CurrentViewModel { get => currentViewModel; set => Set(ref currentViewModel, value); }

        public MainViewModel()
        {
            CurrentViewModel = App.Container.GetInstance<SearchViewModel>();
        }
    }
}
