using GalaSoft.MvvmLight;
using GalaSoft.MvvmLight.Command;
using MusicAppMVVM.Model;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace MusicAppMVVM.ViewModel
{
    internal class InfoViewModel : ViewModelBase
    {
        public Song SongInfo { get; set; }

        public InfoViewModel()
        {
            SongInfo = new()
            {
                name = "Nightcall",
                title = "OST Drive",
                album = new() { name = "Drive film" },
                duration = 2300,
                Img = new(new(@"https://c-fa.cdn.smule.com/rs-s33/arr/24/3a/087680e1-26c0-40e6-8351-f26b9c4211ef_1024.jpg"))
            };
        }

        public RelayCommand<Song> BackCommand
        {
            get => new(async param =>
            {
                App.Container.GetInstance<MainViewModel>().CurrentViewModel = App.Container.GetInstance<SearchViewModel>();
            });
        }
    }
}
