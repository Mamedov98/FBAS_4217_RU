using Ecommerce.Message;
using Ecommerce.Model;
using Ecommerce.Services.Interfaces;
using GalaSoft.MvvmLight;
using GalaSoft.MvvmLight.Command;
using GalaSoft.MvvmLight.Messaging;
using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using static Ecommerce.Model.EcommerceContext;

namespace Ecommerce.ViewModel
{
    
    class EditPageModel : ViewModelBase, INotifyPropertyChanged
    {
        public AdminPanelViewModel AdminPanel { get; set; } 


        

        private Sneaker _selectedSneaker;
        private readonly IMessenger _messenger;
        private readonly INavigationService _navigationService;

        public EditPageModel(IMessenger messenger, INavigationService navigationService)
        {
            _messenger = messenger;

            _messenger.Register<DataMessage>(this, message =>
            {
                AdminPanel = message.Data as AdminPanelViewModel;  
            });

            _navigationService = navigationService;
        }



        public Sneaker SelectedSneaker
        {
            get => _selectedSneaker;
            set
            {
                if (_selectedSneaker != value)
                {
                    _selectedSneaker = value;
                    RaisePropertyChanged(nameof(SelectedSneaker));
                }
            }
        }


        public RelayCommand ExitButton
        {
            get => new(() =>
            {
                
               
                _navigationService.NavigateTo<AdminPanelViewModel>(); 


            });

            // public event PropertyChangedEventHandler? PropertyChanged;
        }


    }
}
