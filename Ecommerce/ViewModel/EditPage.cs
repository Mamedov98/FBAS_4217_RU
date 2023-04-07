using Ecommerce.Model;

namespace Ecommerce.ViewModel
{
    internal class EditPage
    {
        private EcommerceContext.Sneaker? selectedSneaker;

        public EditPage(EcommerceContext.Sneaker? selectedSneaker)
        {
            this.selectedSneaker = selectedSneaker;
        }
    }
}